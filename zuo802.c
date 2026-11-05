#include "stdio.h"
struct day
{
int year;
int month;
int date;
};
int main()
{
    struct day stu;
    printf("请输入年:\n");
    scanf("%d",&stu.year);
    printf("请输入月:\n");
    scanf("%d",&stu.month);
    printf("请输入日:\n");
    scanf("%d",&stu.date);
    int t,x,y=0,z;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    t=stu.year;
    if((t%4==0&&t%100!=0)||t%400==0)
    {
        for(x=0;x<stu.month-1;x++)
        {
            y+=b[x];
        }
        z=y+stu.date;
    }
    else
    {
        for(x=0;x<stu.month-1;x++)
        {
            y+=a[x];
        }
        z=y+stu.date;
    }
    printf("该日是本年的第%d天\n",z);
}