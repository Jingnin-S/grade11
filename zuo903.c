#include "stdio.h"
int strlen(char *s)
{
    int len=0;
    while(*s++)
    len++;
    return(len);
}
void srev(char *s)
{
    char *head=s,*tail;
    char temp;
    tail=s+(strlen(s)-1);
    while(head<tail)
    {
        temp=*tail;
        *tail=*head;
        *head=temp;
        head++;
        tail--;
    }

}

void main()
{
int slen;
char *s="I Love Bjtu!";
slen=strlen(s);
printf("the length is %d\n",slen);
srev(s);
printf("%s\n",s);
}