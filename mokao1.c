#include "stdio.h"
int main()
{
    int a;
    char b;
    scanf("%d\n",&a);
    if(a>=90&&a<=100)
    {
        b='A';
    }
    if(a>=80&&a<=89)
    {
        b='B';
    }
    if(a>=70&&a<=79)
    {
        b='c';
    }
    if(a>=60&&a<=69)
    {
        b='D';
    }
    if(a<60)
    {
        b='E';
    }
    printf("The grade is %c\n",b);
}