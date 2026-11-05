#include <stdio.h>
#define N 10

void printfdist(int a[], int n) // 打印函数
{

/*请补全代码*/
    int i,j,k,t,max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=1;i<max+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>=(max-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void sort(int a[], int n)  // 排序函数
{
/*请补全代码*/
    int i,t,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int dist[N]={3,2,11,19,6,11,4,15,5,10};
    printf("\n");
    printfdist(dist, N);
    sort(dist, N);
    printf("the ordered distances:\n");
    printfdist(dist, N);
}
