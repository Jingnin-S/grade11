#include "stdio.h"
int main()
{
    int a[5]={10,14,8,22,16};
    int b[5],c,j;
    
    for(int i=0;i<5;i++)
    {
        if(a[i]!=a[i+1])
        {
            if(a[i]%2==0)
            {
                c=0.5*a[i];
                b[i]=c;
            }
            else
            {
                c=0.5*(1+a[i]);
                b[i]=c;
            }  
            a[i+1]=a[i+1]+b[i];
        }
        else
        break;
    }
    
    printf("%d",a);
    printf("\n%d",j);
}