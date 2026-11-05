#include "stdio.h"
#include "string.h"
void srev(char *s)
{
    int len=strlen(s);
    char t;
    for(int i=0;i<len/2;i++)
    {
       t=s[i];
       s[i]=s[len-i-1];
       s[len-i-1]=t;
    }   
}
void main()
{
char test[]={"this is the test"};
printf("%s\n",test);
srev(test);
printf("%s\n",test);
}
