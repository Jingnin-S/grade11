#include "stdio.h"
int main()
{
    int a,b;
    printf("输入整数:\n");
    scanf("%d\n",&a);
    b=a;
    printf("输出为:%d=",a);
    for(int i=2;i<a;i++)
    {
        
        while(a!=i)
        {
            if(a%i==0)
            {
                printf("%d*",i);
                a=a/i;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n",a);
}