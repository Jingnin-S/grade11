#include "stdio.h"
int main()
{
    int a,b=2,c=0,e=0;
    scanf("%d",&a);
    while(b<=a)
    {
        e=e+b;
        b=b*2;
        c++;
        
    }
    float d;
    d=(e*0.8)/c;
    printf("The average cost for each day is %.2f yuan",d);
}