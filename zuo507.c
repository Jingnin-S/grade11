#include "stdio.h"
#include "string.h"
int main(void)
{
    for(int i=1;i<201;i++)
    {
        if(i%7!=0)
        {
            printf("%d\n",i);
        }
    }
}