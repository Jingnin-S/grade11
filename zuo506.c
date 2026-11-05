#include "stdio.h"
#include "string.h"
int main()
{
    char a[80];
    printf("输入主字符串:\n");
    scanf("%s",a);
    char b[1];
    printf("输入子字符串:\n");
    scanf("%s",b);
    
    int i,n=0;
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]== b[0]&&a[i+1]== b[1])
        {
            a[i]='A';
            a[i+1]='a';
        }
        else
        
        {
            if(n==strlen(a))
            
            n=0;
            break;
            
        }
    }
    printf("替换后的字符串为:%s\n",a);
}