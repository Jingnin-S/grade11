#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f %f",&a,&b);
    while(!(a==0&&b==0))
    {
        c=30*a+b/2;
        d=6*b;
        e=c-d;
        if(e>=0)
        {
            f=e;
        }
        else
        {
            f=-e;
        }
        if(f>180)
        {
            f=360-f;
        }
        printf("At %02d:%02d the angle is %.1f degrees.\n",(int)a,(int)b,f);
        scanf("%f %f",&a,&b);
    }
    return 0;
}