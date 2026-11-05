#include "stdio.h"
int main()
{
    int a,b,c;
    printf("请输排序前三个数:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b&&a>c)
        if(b>c)
        printf("排序后的数为%d %d %d\n",c,b,a);
        else if(c>b)
        printf("排序后的数为%d %d %d\n",b,c,a);
    if(b>c&&b>a)
        if(a>c)
        printf("排序后的数为%d %d %d\n",c,a,b);
        else if(c>a)
        printf("排序后的数为%d %d %d\n",a,c,b);
    if(c>a&&c>b)
        if(a>b)
        printf("排序后的数为%d %d %d\n",b,a,c);
        else if(b>a)
        printf("排序后的数为%d %d %d\n",a,b,c);

}