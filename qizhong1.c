#include "stdio.h"
int main()
{
    int x;
    scanf("%d",&x);
    if(x>-10&&x<0)
    {
        printf("y=%d\n",x+10);
    }
    else if(x>=0&&x<10)
    {
        printf("y=%d\n",2*x);
    }
    else if(x>=10)
    {
        printf("y=%d\n",x*x);
    }
    else
    {
        printf("Wrong input. Your input is out of range.\n");
    }
}