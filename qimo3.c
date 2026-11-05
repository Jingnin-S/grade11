#include <stdio.h>
#include <math.h>
int pb(int a, int b, int c)
{
    if(a+b>c&&a+c>b&&b+c>a)
    return 1;
    else
    return 0;
}
float area(int a,int b,int c)
{
    double p,s;
    p=0.5*(a+b+c);
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(pb(a,b,c)==1)
    {
        
        printf("The area of the triangle is %.2f",area(a,b,c));
    }
    else
    printf("Can¡¯t form a triangle.");
}