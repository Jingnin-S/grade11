#include "stdio.h"
#include "string.h"
int p;
char t;
int f()
{
    char a[100];
    char b[100];
    for(int i=0;i<100;i++)
    {
        gets(a);
    }
    for(int i=strlen(a)-1;i>-1;i--)
    {
        printf("%c",a[i]);
    }


}
int main()
{
    char a[100];
    f(a);
    printf("\n");
}