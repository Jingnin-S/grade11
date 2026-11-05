#include "stdio.h"
int main()
{
    int i,j,x;
    int s[4][4] ={{1,20,-3,-6},{2,-10,2,50},{3,-9,71,-20},{4,3,8,-11}};
    for(i=0;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            if(s[i][j]>0)
            {
                printf("%d ",0);
            }
            else
            {
                printf("%d ",s[i][j]);   
            }
            
        }
        printf("\n");
    }
    
}    