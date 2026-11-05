#include "stdio.h"
int main()
{
    char c;
    printf("输入原始字符:\n");

    printf("转换后的密码为: ");
    while((c=getchar())!='\n')
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='z'))
        {
            c=c+4;
        
            if(c>'Z'&&c<='Z'+4||c>'z')
            c=c-26;
        }
        printf("%c",c);
        
    }
    printf("\n");
}