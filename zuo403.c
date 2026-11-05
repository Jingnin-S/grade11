#include "stdio.h"
int main()
{
    int a,b,c,d;
    a=1;c=0;
    while(a<20)
    {
        c+=a;
        a++;
        d+=a;
        a++;
    }
    printf("奇数之和与偶数之和分别为: %d,%d\n",c,d);
    return 0;
}