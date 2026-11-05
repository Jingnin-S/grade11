#include "stdio.h"
int main()
{
    double a[5]={90.80,95.00,84.30,92.40,77.50},q=0,t;
    int i,j;
    printf("输入5个学生的成绩:\n");
    for(i=0;i<5;i++)
    {
        scanf("%lf ",&a[i]);
        q+=a[i];
    }
    printf("平均值为:%.2f\n",q/5);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%.2f ",a[i]);
    }
    printf("\n");


}