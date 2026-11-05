
#include<stdio.h>
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
int n;
printf("输入阶乘次数:\n");
scanf("%d",&n);
printf("阶乘为:%d\n",fact(n));
}
