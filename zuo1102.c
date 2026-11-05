#include "stdio.h"
int main(void)
{
    char a[27]="jjyyzzabcdefgJJYYZZABCDEFG";
    int i,j,k;
    char t;
    for(i=0;i<27;i++)
    {
        if(a[i]<='z'&&a[i]>='a')
        {
            
            if(a[i]=='a')
            {
                a[i]='z';
            }
            else
            {
                a[i]--;
            }
        }
    }
    for(i=0;i<25;i++)
    {
        for(j=i+1;j<26;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("%s",a);
    printf("\n");
}