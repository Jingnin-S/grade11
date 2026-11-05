#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    long i,b,s=1;
    float c;
    double j=0;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(s=1;s<=a[i];s++)
        {
            j=j+log10(s);
        }
        b=(int)j;
        c=j-b;
        printf("%.4fe+%ld\n",pow(10,c),b);
        j=0;
    }
    return 0;
}