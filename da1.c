#include "stdio.h"
struct plane
{
    char name[80];
    char ID[18];
    int smoke;
    int windows;
    int pai;
    char lie[4];
};
struct plane d[80];
int main()
{
    int i,a,j,k,x=0,y=0,z=0,w=0;
    char m,n,p,q;
    struct plane d[80];
    printf("___________________________________________\n");
    
    for(i=0;i<80;i++)
    {
        printf("是否有乘客登机？\n是选1，否选2\n");
        scanf("%d",&a);
        if(a==1)
        {
        printf("请输入姓名\n");
        scanf("%s",d[i].name);
        printf("请输入身份证号\n");
        scanf("%s",d[i].ID);
        printf("是否有吸烟需求？\n需要选1，不需要选2\n");
        scanf("%d",&d[i].smoke);
        printf("是否有靠窗需求？\n需要选1，不需要选2\n");
        scanf("%d",&d[i].windows);
        printf("--------------------------------------------\n");
        }
        else
        {
            printf("登记完毕\n");
            break;
        }
    }
    int e[20][4],b[20];
    char c[4]={'A','B','C','D'};
    for(i=0;i<20;i++)
    {
        for(j=0;j<4;j++)
        {
            e[i][j]=0;
        }
        b[20]=i+1;
    }

    for(i=0;i<80;i++)
    {
        if(d[i].smoke==1&&d[i].windows==1)
        {
            printf("请选座位\n");
            for(j=19;j<21;j++)
            {
                for(k=0;k<4;k+3)
                {
                    printf("%d%c ",b[j],c[k]);
                }
            }
            printf("\n");
            scanf("%d%c",&x,&m);
            for(k=0;k<20;k++)
            {
                for(j=0;j<4;j++)
                {
                    if(e[k][j]==0)
                    {
                        e[k][j]==i;
                        printf("订座成功！");
                        d[i].pai=x;
                        d[i].lie=m;
                        break;
                    }
                    else
                    {
                        printf("座位已被预订，请重新预订！");  
                    }
                }
            }
                        

        }
        else if(d[i].smoke==1&&d[i].windows==2)
        {
            printf("请选座位\n");
            for(j=19;j<21;j++)
            {
                for(k=1;k<3;k++)
                {
                    printf("%d%c ",b[j],c[k]);
                }
            }
            printf("\n");
            scanf("%d%c",&x,&m);
            for(k=0;k<20;k++)
            {
                for(j=0;j<4;j++)
                {
                    if(e[k][j]==0)
                    {
                        e[k][j]==i;
                        printf("订座成功！\n");
                        d[i].pai=x;
                        d[i].lie=m;
                        break;
                    }
                    else
                    {
                        printf("座位已被预订，请重新预订！\n");  
                    }
                }
            }
        }
        else if(d[i].smoke==2&&d[i].windows==1)
        {
            printf("请选座位\n");
            for(j=0;j<19;j++)
            {
                for(k=0;k<4;k+3)
                {
                    if(e[j][k]==0)
                    printf("%d%c ",b[j],c[k]);
                }
            }
            scanf("%d%c",&x,&m);
            if(ff(x,m)==1)
            {
                e[x-1][w]==i;
                printf("订座成功！\n");
                d[i].pai=x;
                strcpy(d[i],m);
                break;
            }
            else
            {
                void cc(19,4,1,3,0,0);
            }        
            
        }
        else if(d[i].smoke==2&&d[i].windows==2)
        {
            printf("请选座位\n");
            for(j=0;j<19;j++)
            {
                for(k=1;k<3;k++)
                {
                    printf("%d%c",b[j],c[k]);
                }
            }
            scanf("%d%c",&x,&m);
            for(k=0;k<20;k++)
            {
                for(j=0;j<4;j++)
                {
                    if(e[k][j]==0)
                    {
                        e[k][j]==1;
                        printf("订座成功！");
                        d[i].pai=x;
                        d[i].lie=m;
                        break;
                    }
                    else
                    {
                        printf("座位已被预订，请重新预订！");  
                    }
                }
            }
        }
    }
    printf("姓名\t身份证号\t座位号\t\n");
    for(i=0;i<80;i++)
    {
        printf("%s\t%s\t%d%s\n",d[i].name,d[i].ID,d[i].pai,d[i].lie);
    }
    
}
void ff(int c,char d)
{
    int i,j,k,flag=0;
    int e[20][4],b[20];
    char c[4]={'A','B','C','D'};
    for(i=0;i<20;i++)
    {
        for(j=0;j<4;j++)
        {
            e[i][j]=0;
        }
        b[20]=i+1;
    }
    for(k=0;k<4;k++)
        {
                if(d==c[k])
                {
                    d=k;
                }
        }
                    if(e[c-1][w]==0)
                    {
                       flag=1;
                       return 1;
                    
                    }
                    else
                    return -1;
                    
                
            
        }
}
void cc(int c,int d,int e,int f,int g,int h)
{
    for(j=g;j<c;j=j+e)
    {
        for(k=h;k<d;k=k+f)
        {
        if(e[j][k]==0)
        {
            printf("座位已被预订，请重新预订！\n"); 
            goto loop_3;
        }
        else
        {
            printf("座位已全部订满，请换乘！\n");                
        }
        }
    }