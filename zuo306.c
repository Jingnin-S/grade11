#include "stdio.h"
int main()
{
    int a;
    printf("请输入一个幸运数字:\n");
    scanf("%d",&a);
    switch(a==1?1:a==2?2:a==3?3:4)
    {
        case 1:printf("恭喜你得到一辆车!\n");break;
        case 2:printf("恭喜你得到一台彩电!\n");break;
        case 3:printf("恭喜你得到一台电脑!\n");break;
        default:printf("很遗憾，没有奖品给你!\n");break;
    }
    return 0;
}