#include "stdio.h"
int a,b,c,d;
int f()
{
    int n;
    char p;
    a=0,b=0,c=0,d=0;
    while((p=getchar())!='\n')
    {
        if((p>='a'&&p<='z')||(p>='A'&&p<='z'))
        a++;
        else if(p<='9'&&p>='0')
        b++;
        else if(p==' ')
        c++;
        else
        d++;

    }
    return(a,b,c,d);
    
}
int main()
{
    char p;
    scanf("%s",&p);
    f(p);
    printf("数字个数:%d\n",b);
    printf("字母个数:%d\n",a);
    printf("空格个数:%d\n",c);
    printf("其他字符个数:%d\n",d);
}