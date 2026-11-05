#include "stdio.h"
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=0.6*a+0.4*b;
    printf("Writing score: %d\n",a);
    printf("Testing score: %d\n",b);
    
    if(c>85&&c<=100)
    printf("Final score is %d,  the grade is excellent",c);
    else if(c>70&&c<=85)
    printf("Final score is %d,  the grade is good",c);
    else if(c>=60&&c<=70)    
    printf("Final score is %d,  the grade is pass",c);
    else
    printf("Final score is %d,  the grade is fail",c);
    if(a>100||b>100||a<0||b<0)
    printf("Wrong input");
}