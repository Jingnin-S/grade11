#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int n = 10;
int a, i, cn;
int a1[] = { 13,15,4,9,6,8,10,17,1,5 };
int even(int n)
{
   if(n%2==0)
   {
       return 1;
   }
   else
   return 0;
}

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
int main()
{
    for (i = 0;i < n;i++)
    {
        a = a1[i];
        if (even(a))
        {
            cn++;
        }
        else
        {
            printf("奇数: %d,", a);
            if (prime(a))
            {
                printf("素数: %d,", a);
            }
        }

    }
    printf("\n偶数的个数为: %d\n", cn);
}