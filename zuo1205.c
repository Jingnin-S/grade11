#include "stdio.h"
#include "string.h"
void del(char *p,char *q)
{
   int i=0,j=0,k=0;
   while(p[i]!='\0')
   {
       while(q[j]!='\0')
       {
           if(p[i]==q[j])
           {
                i++;
                j++;
                if(q[j]=='\0')
                j=0;
                break;
           }
           else
           {
               j=0;
               p[k]=p[i];
               k++;
               i++;
               
           }
       }
       p[k]='\0';
   }

}

void main()
{
char str[]="yamsderdsfam";
char substr[]="am";
del(str,substr);
puts(str);
}