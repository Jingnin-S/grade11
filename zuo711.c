#include "stdio.h"
int n;
int ff(int x)
{
    if(x<n)
    {
    
    return 2*(ff(x+1)+1);
    }
    if(x==n)
    {
       return 1; 
    }
}

int main(void)
{

    scanf("%d",&n);
    printf("%d\n",ff(1));
    
}