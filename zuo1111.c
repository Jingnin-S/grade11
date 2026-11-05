#include "stdio.h"
#include "string.h"
void strconect(char *m, char *n, char *result)
{
    int i=0;
    while(*m!='\0')
    {
        result[i]=*m;
        m++;
        i++;

    }
    while(*n!='\0')
    {
        result[i]=*n;
        n++;
        i++;

    }
result[i]='\0';
}

int main()
{
char a[11];
char b[11];
char res[20];
gets(a);
gets(b);
char *str1=a;
char *str2=b;
strconect(str1,str2,res);
printf("%s\n",res);


}