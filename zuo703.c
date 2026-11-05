#include "math.h"
#include "stdio.h"
double pb(double a,double b,double c)
{
    if(a+b>c&&a+c>b&&b+c>a)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}




double area(double a, double b, double c)
{
    double t;
    t=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
    a=0.25*sqrt(t);
    return a;
}
void main()
{
int a,b,c;
double pb(double a,double b,double c);
double area(double a, double b, double c);
scanf("%d,%d,%d",&a,&b,&c);
if(pb(a,b,c)>0)
{
printf("area=%.0f\n",area(a,b,c));
}
else
printf("input error!\n");
}

