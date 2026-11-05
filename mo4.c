#include "stdio.h"
#include "string.h"
int main()
{
    char a[80];
    int j=0;
    gets(a);
    char b[80];
    char t;
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            b[j]=a[i];
            j++;
        }
    }
    puts(b);
    return 0;
}