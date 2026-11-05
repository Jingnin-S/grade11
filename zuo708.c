#include "stdio.h"
#include "math.h"
#define PI 3.14
float cl;
float carea(float r)
{
    float a;
    a=PI*r*r;
    cl=PI*2*r;
    return (a,cl);
   
}
int main()
{
float r,area;
printf("r=?\n");
scanf("%f",&r);
area=carea(r);
printf("r=%5.2f,carae=%5.2f,cl=%5.2f\n",r,area,cl);
}