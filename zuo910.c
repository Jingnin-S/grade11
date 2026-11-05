#include "stdio.h"
void pcopy(char *p,int n,int m)
{
    for(int i=n-1;i<m;i++)
    {
        printf("%c",p[i]);
    }
    printf("\n");
}
void main()
{
char str[50];
int n,m;
printf("?????:\n");
gets(str);
printf("??????????:\n");
scanf("%d %d",&n,&m);
pcopy(str,n,m);

}

