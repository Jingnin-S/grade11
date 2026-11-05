#include "stdio.h"
int main()
{
    int a,b,c;
    printf("请输入身高和体重:\n");
    scanf("%d,%d",&a,&b);
    if((a-110)+5<=b)
    printf("你的体重超重，请注意减肥。\n");
    if((a-110)-5>=b)
    printf("你的体重偏轻，请注意营养。\n");
    if((a-110)-5<=b&&(a-110)+5>=b) 
    printf("你的体重刚好，请保持。\n");

}