#include "stdio.h"
void DisplayArray(int *p,int n)
{
    
    for(n=0;n<10;n++)
    {
        printf("%d ",*(p+n));
    }
    printf("\n");
}
void main()
{
int *p,i,a[10];
p=a;               
for(i=0;i<10;i++)
scanf("%d",p++);
p=a; 
DisplayArray(a,10);                 
}