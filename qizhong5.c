#include "stdio.h"
int main()
{
    int i,a[15];
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n");
    for(i=0;i<15;i++)
    {
        printf("%d ",a[i]);
    }
    int b;
    scanf("%d",&b);
    printf("\n");
    for(i=0;i<15;i++)
    {
        if(a[i]==b)
        {
            if(a[i]==i+1)
            {
                printf("This is a lucky number\n");
                break;
            }
            else
            {
                printf("This is not a lucky number\n");
            }
        }

    }
}