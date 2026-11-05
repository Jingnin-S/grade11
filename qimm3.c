#include "stdio.h"
int main()
{
    int a[10]= {1,5,3,1,2,3,7,6,3,9};
    int *p;
    int b=0;
    printf("please input any number from 0 to 9\n");
    scanf("%d",&p);
    if(p>9)
    printf("wrong input!\n");
    else{
    for(int i=0;i<10;i++)
    {
        if(p==a[i])
        {
            b++;
        }
    }
    printf("%d appears %d times",p,b);
    }
}