#include "stdio.h"
#include <math.h>
int main()
{
    float a,b,c,d,e,f,g,h;
    printf("请输入本金:\n");
    scanf("%f\n",&a);
    b=a*(1+5*0.045);
    c=a*(1+2*0.026)*(1+3*0.0325);
    d=a*(1+3*0.0325)*(1+2*0.026);
    f=pow(1+0.02,5);
    e=a*f;
    h=pow(1+0.000875,20);
    g=a*h;
    
    printf("p1=%.2f,p2=%.2f,p3=%.2f,p4=%.2f,p5=%.2f\n",b,c,d,e,g);
    return 0;

}