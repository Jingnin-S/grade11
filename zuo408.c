#include "stdio.h"
int main()
{
    int a,b,c,i;
    for(i=0;i<=100;i++)
    {
        for(a=1;a<50;a++)
        {
            for(b=1;b<50;b++)
            {
                for(c=1;c<50;c++)
                {
                    
    
                    if((3*a+2*b+c)==50&&(a+b+c)==30)
                    {
                        printf("男人、女人和小孩各:%d,%d,%d\n",a,b,c);
                        i++;
                    }
                    else
                    {
                        i++;
                    }
    
                }
            }
        }
    }    
    return 0;
}