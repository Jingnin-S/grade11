#include "stdio.h"
int main()
{
    char a;
    printf("请输入一个字符:\n");
    scanf("%c\n",&a);
   
    if(a>='A'&&a<='Z')
    {
        printf("小写字母为:%c\n",a+32);
    }
    
    else
    {
        printf("请输入合法的字母\n");
    }
    return 0;
    
}