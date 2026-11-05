#include "stdio.h"
int main()
{
    int a,b;
    int sum;
    int product;
    printf("please input two int:\n");
    scanf("%d,%d,&a,&b");
    sum=a+b;
    product=a*b;
    printf("sum=%d\n",sum);
    printf("product=%d\n",product);
}
