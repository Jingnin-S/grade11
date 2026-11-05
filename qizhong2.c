#include "stdio.h"
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    if(a==1)
    {
        for(i=0;i<9;i++)
        {
            if(i<4)
            {
                for(j=0;j<4;j++)
                {
                    printf(" ");
                    if(j==3)
                    {
                        printf("*\n");
                    }
                }
            }
            else if(i==4)
            {
                for(j=0;j<9;j++)
                {
                    printf("*");
                    if(j==8)
                    {
                        printf("*\n");
                    }
                }
            }
            else if(i>4)
            {
                for(j=0;j<4;j++)
                {
                    printf(" ");
                    if(j==3)
                    {
                        printf("*\n");
                    }
                }
            }
        }
        
    }
    else if(a==2)
    {
        for(i=0;i<9;i++)
        {
            if(i<4)
            {
                for(j=0;j<i;j++)
                {
                    printf(" ");
                }
                printf("*");
                for(j=0;j<9-2*i;j++)
                {
                    printf(" ");

                }
                printf("*\n");
            }
            if(i==4)
            {
                for(j=0;j<5;j++)
                {
                    printf(" ");
                }
                printf("*\n");
            }
            if(i>4)
            {
                for(j=9-i;j>0;j--)
                {
                    printf(" ");
                }
                printf("*");
                for(j=0;j<2*i-9;j++)
                {
                    printf(" ");

                }
                printf("*\n");
            }
        }
        
    }
    else
    {
        printf("Input is out of range!\n");
    }
}