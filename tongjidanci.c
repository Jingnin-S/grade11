#include "stdio.h"
#include "string.h"
int main()
{
    char a[350];
    printf("please input a string:\n");
    gets(a);
    int i,c=0,f=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            f=0;
        }
        else if(f==0)
        {
            c++;
            f=1;
        }
    }
    printf("the total word is %d\n",c);

}