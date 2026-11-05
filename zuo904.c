#include "stdio.h"
#include <stdlib.h>
void strcpy(char *dest,char *src)
{   
    while(*src!=0)
    {
        *dest=*src;
        src++;
        dest++;
    }
}
void main()
{
char *src="abcd";
char *ds=(char *)malloc(10);
strcpy(ds,src);
puts(ds);
}
