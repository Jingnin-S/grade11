#include "stdio.h"
int main()
{
    int a[74][5];
    int x,y,z=0,i,j;
    for(i=0;i<73;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=i*5+j+1;
            
        }
    }
    a[73][0]=366;
    printf("输入月和日:\n");
    scanf("%d %d",&x,&y);

    switch(x)
    {
        case 1:z=y;break;
        case 2:z=31+y;break;
        case 3:z=31+29+y;break;
        case 4:z=31*2+29+y;break;
        case 5:z=31*2+30+29+y;break;
        case 6:z=31*3+30+29+y;break;
        case 7:z=31*3+30*2+29+y;break;
        case 8:z=31*4+30*2+29+y;break;
        case 9:z=31*5+30*2+29+y;break;
        case 10:z=31*5+30*3+29+y;break;
        case 11:z=31*6+30*3+29+y;break;
        case 12:z=31*6+30*4+29+y;break;
    }
    for(i=0;i<74;i++)
    {
        for(j=0;j<5;j++)
        {
            if(z==a[i][0]||z==a[i][1]||z==a[i][2])
            {
                printf("在打鱼\n");
                break;
            }
            else if(z==a[i][3]||z==a[i][4])
            {
                printf("在晒网\n");
                break;
            }
        }
    }
}