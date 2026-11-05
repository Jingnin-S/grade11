#include "stdio.h"
#define PI 3.14
int main()
{
    float r,h,s,v,c;
    
    scanf("r=%f, h=%f",&r,&h);

    c=2*r*PI;
    s=r*r*PI;
    v=r*r*h*PI;
  
    printf("Perimeter=%.2f, CircleArea=%.2f, CylinderVolume=%.2f\n",c,s,v);
    
    return 0;
}