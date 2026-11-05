#include <stdio.h>
void add1(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]+1;
    }
}
int main()
{
  int i;
  void add1(int a[],int n);
  int a[]={0,1,2,3,4,5,6,7,8,9};
  add1(a,10);
  for(i=0;i<10;i++)
  printf("%d ",a[i]);
  printf("\n");
}