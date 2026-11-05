#include "stdio.h"
#include "math.h"
int main()
{
    int a,b,c,d;
    printf("ÊäÈëÕûÊı:\n");
    scanf("%d\n",&a);
    c=sqrt(a);
    d= (int) c;
    for(b=2;b<d;b++)
    {
        if(d%b!=0)
        {
            
            printf("%d is not a prime number\n",a);
            break;
        
        }
        else
        {
            printf("%d is a prime number\n",a);
            break;
        }
    }
    return 0;
}