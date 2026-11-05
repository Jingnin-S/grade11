#include "stdio.h"
int main()
{
    int x,i,j,k=0,max=0;
    scanf("%d\n",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
        
    }
    printf("%d %d\n",max,j);
    for(i=0;i<x;i++)
    {
        if(max/a[i]>=2)
        {
            k++;
            printf("Yes");
            break;
        }
    }
    
    
    
    
    
}