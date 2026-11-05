#include "stdio.h"
int main()
{
    int a,b,c,d,e;
    printf("please input data:\n");
    scanf("%d",&a);
    b=a/100;
    c=(a-b*100)/10;
    d=a%10;
    printf("¼ÆËã½á¹ûis: %d\n",b+c+d);
    return 0;
}