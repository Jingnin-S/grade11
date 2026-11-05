#include "stdio.h"
int main()
{
    int i,j,x=0;
    int s[3][4]={{2,1,4,5},{2,3,5,9},{4,6,8,1}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0||i==2||j==0||j==3)
            {
                x+=s[i][j];
            }
        }
    }
    printf("sum=%d\n",x);
}