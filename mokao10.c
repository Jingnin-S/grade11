#include<stdio.h>
#define N 14
#define THRE 0.25 // ≈–∂®„–÷µ

/* vertical acceleration peaks */
const static float peak[N]={-0.442900,0.107600,0.048500,0.837100,0.090800,0.623900,
-0.219100,0.172800,-1.182000,0.797800,-0.804500,-0.171700,-0.291700,0.129600};

int main()
{
    float realpeak[N];
    int i,j=0,k=1;
    float a[N];
    for(i=0;i<N;i++)
    {
        
        if(peak[i]>0.25||peak[i]<-0.25)
        {
            a[j]=peak[i];
            j++;
        }
    }
    if(a[0]>0.25)
    {
        for(i=1;i<j;i=i+2)
        {
            if(a[i]<0&&a[i+1])
            {
                k++;
            }
        }
    }
    else if(a[0]<-0.25)
    {
        for(i=1;i<j;i=i+2)
        {
            if(a[i]>0&&a[i+1])
            {
                k++;
            }
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%.4f ",a[i]);
    }
    printf("\n%d",k);
}