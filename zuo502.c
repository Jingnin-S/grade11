#include "stdio.h"
int main()
{
    int i,j,id,max=0;
    int s[3][5]={ {2011,57,68,40}, {2012,60,83,72}, {2013,40,56,69}};
    for(i=0;i<3;i++)
    {
        for(j=1;j<4;j++)
        {
            s[i][4]+=s[i][j];
        }
        if(s[i][4]>max)
        {
            id=s[i][0];
            max=s[i][4];
        }
    }
    printf("冠军编号:%d,摘水果的总重量:%dkg\n",id,max);
}