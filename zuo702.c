#include "stdio.h"
void pyra(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}
}
int main()
{
    int n;
    printf("????n=\n");
    scanf("%d\n",&n);
    pyra(n); 
}