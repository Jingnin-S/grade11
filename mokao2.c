#include "stdio.h"
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            printf("right triangle\n");
        }
        else if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
        {
            printf("obtuse triangle\n");

        }
        else
        {
            printf("acute triangle\n");
        }
    }
    else
    {
        printf("it is not a triangle\n");
    }
}