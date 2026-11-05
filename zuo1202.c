#include "stdio.h"
    int main()
    {
        int a[2][3],b[3][2];
        int i,j;
        printf("ÊäÈë¾ØÕó:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(j=0;j<3;j++)
        {
            i=0;
            printf("%d %d \n",a[i][j],a[i+1][j]);
        }
    }