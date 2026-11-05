#include "stdio.h"
int main()
{
    int a[3][4]={{45,97,90,65},{34,28,63,43},{37,56,84,15}};
    int max=0;
    int i,j=0,k=0,flag;
    while(j<3)
    {
        for(i=0;i<4;i++)
        {
        if(a[j][i]>max)
        {
            max=a[j][i];
            flag=1;
            k=i;
        }
        
        }
        
        for(i=0;i<3;i++)
        {
            if(max>a[i][k])
            {
                flag=0;
                break;
            }
        
        }
        
        if(flag==1)
        {
        printf("鞍点是a[%d][%d],值是%d\n",j,k,max);
        break;
        }
        else if(flag==0)
        {
            max=0;
            j++;
        }
    }
    
}