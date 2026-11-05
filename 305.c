#include "stdio.h"
#include "math.h"
int main()
{
    int n,m;
    float r=0.0225,total;
    printf("enter n,m");
    scanf("%d,%d",&n,&m);
    total=m*pow(1+r,n);
    printf("total=%f\n",total);
}