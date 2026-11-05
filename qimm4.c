#include "stdio.h"
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[m][n];
    FILE *fp;
    if((fp=fopen("matrix.txt","wb+"))==NULL)
    {
        printf("\nCan't open this file!\n");
        return 0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            fprintf(fp,"%d ",a[i][j]);
        }
        fprintf(fp,"\n");
    }
    int e=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            e+=a[i][j];
        }
        
        printf("sum of row %d is %d\n",i,e);
        e=0;
    }
    
}