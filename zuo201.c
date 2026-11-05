#include "stdio.h"
#define PI 3.14159
int main()
{
    float r,h,s,v,c;
    printf("请输入半径和高度");
    scanf("%f,%f",&r,&h);

    c=2*r*PI;
    s=r*r*PI;
    v=h*r*r*PI;
  
    printf("\n周长:%.5f,面积:%.5f,体积:%.5f\n",c,s,v);
    
    return 0;
}