#include "stdio.h"

int main()
{
  int n,i,j;
  scanf("%d\n",&n);
  double a[n][n];
  if(n<11)
  {
    for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
              scanf("%lf ",&a[i][j]);
          }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            if(j<n-1)
            {
                if((a[i][j]-(int)a[i][j])==0)
                {
                printf("%d ",a[i][j]);
                }
                else
                {
                printf("%f ",a[i][j]);
                }
            }
            else
            {
                if((a[i][j]-(int)a[i][j])==0)
                {
                    printf("%d ",a[i][j]);
                }
                else
                {
                    printf("%f ",a[i][j]);
                }
                    printf("\n");
                }
        }
    }

  } 
  else
  {
      printf("Wrong input, the dimension should not be greater than 10. \n");
  } 
}