#include <stdio.h>
#include <math.h>
int a[100];
int az=0;
int num;
long tot=0;
int prime(int n)
{
   float c;
   int b,d=0;
   if(n!=1)
   {      
       for(b=2;b<n;b++)
       {
           if(n%b==0)
           {
               d++;
               if(d!=0)
               {
                   return 0;
               }
           }
       }
       return 1;    
   }
}
void dec(int n,int start)
{
    int i,j;
    if(n<0)
    return;
    else if(n==0)
    {
        tot++;
        printf("%d=%d",a[0],a[1]);
        for(i=2;i<az;i++)
        {
            printf("+%d",a[i]);
        }
        printf("\n");

    }
    else
    {
        for(i=start;i<=num-2;i++)
        {
            if(prime(i))
            {
                a[az++]=i;
                dec(n-i,i);
                a[az--]=0;
            }
        }
    }
}
int main()
{
    scanf("%d",&num);
    if(num<4||num>100)
    {
        printf("输入非法\n");
        return 0;
    }
    a[az++]=num;
    dec(num,2);
    printf("%d有 %ld种\n",num,tot);
}