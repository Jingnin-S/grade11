#include "stdio.h"
void sub(int x,int y,int *z)
{  
    *z=y-x;
}
void main()
{
    int a,b,c;
    void (*p)(int,int,int*);
    p=sub;
    (*p)(10,5,&a);
    (*p)(7,a,&b);
    (*p)(a,b,&c);

    printf("%d,%d,%d\n",a,b,c);
}