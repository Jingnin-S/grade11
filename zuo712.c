
#include "stdio.h"
int ff(int n)
{
    
    if(n<=2)
    {
        return 1;
    }
    if(n>2)
    {
        return ff(n-1) +ff(n-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",ff(n));
}