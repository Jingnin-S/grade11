#include <stdio.h>
void main()
{
    float x,y,z; 
    char c;
    scanf("%f%c%f",&x,&c,&y);
    switch(c)
    {
        case '+': z=x+y; break;

        case '-': z=x-y; break;

        case '*': z=x*y; break;

        case '/': z=( y==0 )?(0):(x/y); break;

        default: z=0; break;

    }
    printf("%f%c%f=%f\n",x,c,y,z);
}