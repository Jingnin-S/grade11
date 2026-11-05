#include "stdio.h"
int main()
{
    int m,b=0,i=1;
    scanf("%d",&m);
    if(m<1)
    printf("Wrong input\n");
    else
    {
    for(i=0;i<m;i++)
    {
        b+=i*i;
        if(b>=m)
        break;
    }
    printf("The maximum integer satisfing the inequality is %d\n",i-1);
    }

}