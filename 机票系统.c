#include<stdio.h>
#include<string.h>
struct biaoge
{
    char name[20];
    char ID[20];
    int pai;
    char wei;
    int chuang;
    int yan;
};
struct biaoge stu[80];
struct biaoge *s=stu;
int main()
{
    printf("——————————————\n|  订票系统  ｜\n——————————————\n");
    printf("订票请按1,查找乘客信息请按2,结束请按3\n");
    char c[20],d[20];
    int a,t=0,i,j,count=0;
    char b;
    int w[18][2]={0},x[18][2]={0},y[2][2]={0},z[2][2]={0};/*四个区域w00,x10,y01,z11*/
    scanf("%d",&a); /*选择功能*/
    pos_1:
    if(a==1&&t>=80)
    {
        printf("该航班人数已满，请改乘其他航班。\n");
    }
    while(a==1&&t<80)
    {
        printf("请输入姓名：\n");
        scanf("%s",stu[t].name);
        printf("请输入身份证号：\n");
        scanf("%s",stu[t].ID);
        printf("是否靠窗(靠窗输入1，不靠窗输入0)\n");
        scanf("%d",&stu[t].chuang);
        printf("是否吸烟(吸烟输入1，不吸烟输入0)\n");
        scanf("%d",&stu[t].yan);
        if(stu[t].chuang==0&&stu[t].yan==0)/*w00*/
        {
            printf("该区域可选座位如下：\n");
            for(i=0;i<=17;i++)
            {
                for(j=0;j<=1;j++)
                {
                    if(w[i][j]==0)
                    {
                        b=(j==0)?'B':'C';
                        printf("%02d%c ",i+1,b);
                        count++;
                    }
                }
                printf("\n");
            }
            for(i=0;i<=17;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(w[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(y[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            if(count!=0)
            {
                printf("选择想要的座位\n");
                printf("输入排：\n");
                scanf("%d",&stu[t].pai);
                i=stu[t].pai-1;
                printf("输入列(B,C)：\n");
                scanf(" %c",&stu[t].wei);
                j=(stu[t].wei=='B')?0:1;
                w[i][j]=1;
                t++;
                printf("订票成功！\n");
            }
            else
            {
                printf("该区域无座位，请改乘其他航班。\n");
            }
            printf("继续订票请按1,查找乘客信息请按2,结束请按3\n");
            scanf("%d",&a);
        }
        else if(stu[t].chuang==1&&stu[t].yan==0)/*x10*/
        {
            printf("该区域可选座位如下：\n");
            for(i=0;i<=17;i++)
            {
                for(j=0;j<=1;j++)
                {
                    if(x[i][j]==0)
                    {
                        b=(j==0)?'A':'D';
                        printf("%02d%c ",i+1,b);
                        count++;
                    }
                }
                printf("\n");
            }
            for(i=0;i<=17;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(w[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(y[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            if(count!=0)
            {
                printf("选择想要的座位\n");
                printf("输入排：\n");
                scanf("%d",&stu[t].pai);
                i=stu[t].pai-1;
                printf("输入列(A,D)：\n");
                scanf(" %c",&stu[t].wei);
                j=(stu[t].wei=='A')?0:1;
                x[i][j]=1;
                t++;
                printf("订票成功！\n");
            }
            else
            {
                printf("该区域无座位，请改乘其他航班。\n");
            }
            printf("继续订票请按1,查找乘客信息请按2,结束请按3\n");
            scanf("%d",&a);
        }
        else if(stu[t].chuang==0&&stu[t].yan==1)/*y01*/
        {
            printf("该区域可选座位如下：\n");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    if(y[i][j]==0)
                    {
                        b=(j==0)?'B':'C';
                        printf("%02d%c ",i+19,b);
                        count++;
                    }
                }
                printf("\n");
            }
            for(i=0;i<=17;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(w[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(y[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            if(count!=0)
            {
                printf("选择想要的座位\n");
                printf("输入排：\n");
                scanf("%d",&stu[t].pai);
                i=stu[t].pai-19;
                printf("输入列(B,C)：\n");
                scanf(" %c",&stu[t].wei);
                j=(stu[t].wei=='B')?0:1;
                y[i][j]=1;
                t++;
                printf("订票成功！\n");
            }
            else
            {
                printf("该区域无座位，请改乘其他航班。\n");
            }
            printf("继续订票请按1,查找乘客信息请按2,结束请按3\n");
            scanf("%d",&a);
        }
        else if(stu[t].chuang==1&&stu[t].yan==1)/*z11*/
        {
            printf("该区域可选座位如下：\n");
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=1;j++)
                {
                    if(z[i][j]==0)
                    {
                        b=(j==0)?'A':'D';
                        printf("%02d%c ",i+19,b);
                        count++;
                    }
                }
                printf("\n");
            }
            for(i=0;i<=17;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(w[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(x[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            for(i=0;i<=1;i++)
            {
                for(j=0;j<=0;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=0;j<=1;j++)
                {
                    if(y[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                    printf("-");
                }
                for(j=1;j<=1;j++)
                {
                    if(z[i][j]==0)
                    {
                        printf("|_ _|");
                    }
                    else{
                        printf("|_*_|");
                    }
                }
                printf("\n");
            }
            if(count!=0)
            {
                printf("选择想要的座位\n");
                printf("输入排：\n");
                scanf("%d",&stu[t].pai);
                i=stu[t].pai-19;
                printf("输入列(A,D)：\n");
                scanf(" %c",&stu[t].wei);
                j=(stu[t].wei=='A')?0:1;
                z[i][j]=1;
                t++;
                printf("订票成功！\n");
            }
            else
            {
                printf("该区域无座位，请改乘其他航班。\n");
            }
            printf("继续订票请按1,查找乘客信息请按2,结束请按3\n");
            scanf("%d",&a);
        }
        count=0;
    }
    while(a==2)
    {
        printf("请输入姓名：\n");
        scanf("%s",c);
        printf("请输入身份证号：\n");
        scanf(" %s",d);
        s=stu;

        for(i=0;i<t;i++,s++)
        {
            if(strcmp(c,s->name)==0&&strcmp(d,s->ID)==0)
            {
                count++;
                printf("姓名：%s\t身份证号：%s\t座位：%02d%c\t\n",s->name,s->ID,s->pai,s->wei);
            }
        }
        if(count==0)
        {
            printf("未找到该乘客信息！\n");
        }
        s=stu;
        count=0;
        printf("订票请按1,查找乘客信息请按2,结束请按3\n");
        scanf("%d",&a);
    }
    if(a==1)
    {
        goto pos_1;
    }
    if(a==3)
    {
        printf("系统结束，欢迎下次光临。\n");
        if(t==0)
        {
            printf("当前无乘客信息。\n");
        }
        else
        {
            printf("\t航班乘客信息清单  \t\n");
            printf("-----------------------------------------\n");
            printf("|姓名\t身份证号\t\t座次\t|\n");
            for(i=0;i<t;i++,s++)
            {
                printf("|%s\t%s\t%02d%c\t|\n",s->name,s->ID,s->pai,s->wei);
            }
            printf("-----------------------------------------\n");
        }
        return 0;
    }
}