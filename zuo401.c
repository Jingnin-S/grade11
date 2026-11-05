#include "stdio.h"
int main()
{
    int day,x1,x2;
    day=7;
    x2=1;

    while (day>0)
    {
        x1=(x2+1)*2;
        x2=x1;
        day--;
    }
    
    printf("竹竿的长度为: %d厘米\n",x1);
    return 0;
}