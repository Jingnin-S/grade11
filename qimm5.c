#include "stdio.h"
int main()
{
    int h[12],l[12];
    int i,j,k,t;
    int max=0,min=100;
    for(i=0;i<12;i++)
    {
        scanf("%d ",&h[i]);
    }
    for(i=0;i<12;i++)
    {
        scanf("%d ",&l[i]);
    }
    printf("high\tlow\tdiff\n");
    for(i=0;i<12;i++)
    {
        j=h[i]-l[i];
        printf("%d\t%d\t%d\n",h[i],l[i],j);
        if(j>=max)
        {
            max=j;
            k=i+1;
        }
        if(j<=min)
        {
            min=j;
            t=i+1;
        }
    }
    printf("Max. diff.: %d,  Month: %d\n",max,k);
    printf("Min. diff.: %d,  Month: %d\n",min,t);
}