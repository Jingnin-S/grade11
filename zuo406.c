#include "stdio.h"
int main()
{
    int a,b,i;
    i=0;
    printf("输入一个整数:\n");
    scanf("%d",&a);
    if(a>0)
    {
        do
        {
            a/=10;
            i++;
        }
        while(a!=0);
    }
    else
    {
        do
        {
            a=-1*a+1;
            a/=10;
            i++;
        } 
        while (a!=0);
        
    }
    printf("该整数的位数为: %d\n",i);
    return 0;
}