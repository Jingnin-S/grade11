#include "stdio.h"
int main()
{
    char a[3];
    printf("请输入售货机的编号:\n");
    scanf("%s",a);
    switch(a[1])
    {
        case '1':printf("矿泉水\n");break;
        case '2':printf("巧克力\n");break;
        case '3':printf("爆米花\n");break;
        case '4':printf("果汁\n");break;
        case '5':printf("显示购买商品的数量\n");break;
        case '6':printf("退出系统\n");break;
        default:printf("请输入[1]--[6]字符数组\n");break;
    }
    return 0;
}