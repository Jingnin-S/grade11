#include "stdio.h"
int main()
{
    int a[5]={10,14,8,22,16};
    int b[5];
    int i,j=1;
    printf("5656");
    while(!(a[1]==a[2]&&a[1]==a[3]&&a[1]==a[4]&&a[1]==a[0]))
    {
        
        for(i=0;i<5;i++)
        {
            if(a[i]%2==0)
            {
                b[i]=0.5*a[i];
            }
            else
            {
                b[i]=0.5*(1+a[i]);
            }
            
        }
        for(int i=0;i<5;i++)
        {
            a[i+1]=b[i]+a[i];
        }
        j++;
    }
    printf("需要这样做%d次,每个人手中的糖块数量才相等,数量为%d块\n",j,a[1]);
    printf("%d\n",a[1]);
}