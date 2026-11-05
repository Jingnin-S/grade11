#include "stdio.h"
int main()
{
    float c,f;
    scanf("%f\n",&f);
    c = (f-32)*5/9.0;
    printf("celsius=%.2f\n",c);
}
