#include "stdio.h"
#include "string.h"
int main()
{
    char a[80];
    char b[3];
    char c;
    printf("输入主字符串:\n");
    gets(a);
    printf("输入子字符串:\n");
    gets(b);
    for(int i=0;a[i]!=0;i++)
    {
        if(a[i]==b[1])
        {
            if(a[i+1]==b[1])
            {
                if(a[i+2]!=b[1])
                {
                    if(a[i-1]!=b[1])
                {
                    a[i] = 'A';
                    a[i+1]= 'A';
                }
                }
                
            }
        }
        
    }
    printf("替换后的字符串为:");
    puts(a);
}