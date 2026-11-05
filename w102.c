#include "stdio.h"
int main()
{
  int a,i,j,z,flag=0;
  scanf("%d",&a);
  int b[a];
  for(i=0;i<a;i++)
  {
    scanf("%d",&b[i]);
  } 
  for(i=0;i<a;i++)
  {
    z=b[i];
    for(j=0;j<a;j++)
    {
        if(b[j]==z&&i!=j)
        {flag=1;
        break;}
    }
    if(flag==0)
    {printf("%d ",z);
    flag=0;}

  } 
  if(flag==1)
  printf("false\n");
}