#include "stdio.h"
int main()
{
    char a[80];
    int i,j=0;
    scanf("%s",a);
    printf("The string is %s\n",a);
    for(i=0;i<80;i++)
    {
        
        if(a[i]=='\0')
        {
            j=i;
            break;  
        }
        else
        {
            continue;
        }
    }
    printf("len=%d\n",j);
    for(i=0;i<(j-1)/2;i++)
    {
        if(a[i]!=a[j-1-i])
        {
            printf("No\n"); 
            break;
        }
        else
        {
           printf("yes\n"); 
           break;
        }  
    }
}