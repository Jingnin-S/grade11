#include "stdio.h"
#include "math.h"
int main()
{
    int n,m;
     printf("输入菱形的高:\n");
     scanf("%d\n",&m);
     n=2*m-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<abs(n/2-i);j++)
        {
            printf(" ");
        }
        for(int j=0;j<n-2*abs(n/2-i);j++)
        {
            printf("*");

        }
        printf("\n");
    }
}