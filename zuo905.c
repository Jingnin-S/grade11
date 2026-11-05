#include "stdio.h"
int strcmp(char *s,char *t)
{
    while(*s!=0&&*t!=0)
    {
        if(*s==*t)
        {
            return (0);
        }
        else
        {
            return(*s-*t);
        }
    }
}

void main()
{
int len;
char *str1="abcd";
char *str2="e";
len=strcmp(str1,str2);
printf("³¤¶È²îÎª:%d\n",len);
}