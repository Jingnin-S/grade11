#include"stdio.h"
#include "string.h"

int Compare(char *p,char *q)
{
    if(strcmp(p,q)>0)
    return 1;
    else
    return 0;
}

int Search(char *p,char *q)
{
    int i=0,j=0,flag=0;
    for(i=0;i<strlen(p);i++)
    {
        if(p[i]==q[j])
        {
            j++;
            flag=1;
        }
        if(q[j]=='\0'&&flag==1)
        {
            return 1;
        }
        flag=0;
    }
   
}

void sort(char *p)
{
    int i,j;
    for(i=0;i<strlen(p);i++)
    {
        for(j=i;j<strlen(p);j++)
        {
            if(p[i]>p[j])
            {
                char t;
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }   
    }
}
void copy(char *p,char *q)
{
    strcpy(p,q);
}

void main()
{
char mainStr[10]={"ydfmpvtfe"};
char subStr[3];
char sub[3]={"qc"};
int m,n;
printf("请输入子字符串:\n");
gets(subStr);

m=Compare(mainStr,subStr);
printf("比较结果%d:\n",m);

n=Search(mainStr,subStr);
printf("查找结果%d:\n",n);

sort(mainStr);
printf("排序后的字符串为%s\n",mainStr);

copy(mainStr,sub);
printf("copy后的字符串为%s\n",mainStr);
}