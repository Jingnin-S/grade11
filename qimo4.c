#include <stdio.h>
struct SalaryList
{
    char name[20];
    int base;
    int subs;
    int overtime;
    int salary;

};

int main()
{
    struct SalaryList SL[10];
    int a,i;
    float b;
    scanf("%d",&a);
    if(a>10)
    {
        printf("wrong input!\n");
    }
    else
    {
        
        for(i=0;i<a;i++)
        {
            scanf("%s %d %d %d %d",SL[i].name,&SL[i].base,&SL[i].subs,&SL[i].overtime,&SL[i].salary);
            SL[i].salary=SL[i].base+SL[i].subs+SL[i].overtime;

        }
        printf("\n");
        
        printf("the total salary of each staff is:\n");
        for(i=0;i<a;i++)
        {
            printf("%s %d %d %d %d\n",SL[i].name,SL[i].base,SL[i].subs,SL[i].overtime,SL[i].salary);
        }
        printf("\n");
        for(i=0;i<a;i++)
        {
            if(SL[i].salary>5000)
            {
            b=(SL[i].salary-5000)*0.03;
            printf("%s needs to pay %.2f yuan in tax;\n",SL[i].name,b);
            }
        }
        printf("\n");
        printf("I have saved everyone's salary in a file \n");
    }
    FILE *fp;
    if((fp=fopen("salary.txt","w+"))==NULL)
    {
        printf("\nerror\n");

    }
    for(i=0;i<a;i++)
    {
        fprintf(fp,"%s %d %d %d %d\n",SL[i].name,SL[i].base,SL[i].subs,SL[i].overtime,SL[i].salary);
    }
    fclose(fp);
}