#include "stdio.h"
#include "string.h"

#define N 3

#define M 2

struct STUDENT
{
char num[15];
char name[20];
int score;
};
void InputData(struct STUDENT *ps,int len);
void WriteFile(struct STUDENT std[],int len, FILE *fp);
void ReadFile(FILE *fp,struct STUDENT std[],int m);
int main()
{
FILE *fp;
struct STUDENT std[N];
if((fp=fopen("student.dat","wb+"))==NULL)
{
printf("\nCan't open this file!\n");
return;
}
InputData(&std[0],N);
WriteFile(std,N,fp);
ReadFile(fp,std,M);
fclose(fp);
}

void InputData(struct STUDENT *ps,int len)
{
    for(int i=0;i<len;i++)
    {
        scanf("%s %s %d",ps[i].num,ps[i].name,&ps[i].score);
    }  
}

void WriteFile(struct STUDENT std[],int len, FILE *fp)
{
    for(int i=0;i<len;i++)
    {
        if(fwrite(&std[i],sizeof(struct STUDENT),1,fp)!=1)
        printf("error\n");
    }
}
void ReadFile(FILE *fp,struct STUDENT std[],int m)
{
    fseek(fp,sizeof(struct STUDENT)*(M-1),0);
    fread(&std[m-1],sizeof(struct STUDENT),1,fp);
    printf("No.%d student is:\n",m);
    printf("Num:%s,Name:%s,Score:%d\n",std[m-1].num,std[m-1].name,std[m-1].score);
}