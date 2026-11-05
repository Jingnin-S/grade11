#include "stdio.h"
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    {
        printf("Upper\n");
    }
    else if(a>='a'&&a<='z')
    {
        printf("Lower\n");
    }
    else if(a>='1'&&a<='9')
    {
        printf("Digit\n");
    }
    else
    printf("Other\n");
}