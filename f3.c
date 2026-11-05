#include "stdio.h"
extern int a=5;
char c1='a',c2='b';
int fact();
int main()
{extern int b;
char c2='B';
printf("%c \n",c1-32);
printf("%c ,%d\n",c2,b*b);
printf("%d!=%d\n",a,fact());
}
int b=2;