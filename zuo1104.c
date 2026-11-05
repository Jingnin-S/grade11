#include "stdio.h"
#include "string.h"
int main()
{
    char a[]="Hi xxxxxx How are you.";
    char b[6];
    int i,j,k,t=0;
    printf(" ‰»Î–’√˚:\n");
    scanf("%s",b);
    k=sizeof(a)/sizeof(a[0]);
    for(i=0;i<k;i++)
    {
        if(a[i]=='x')
        {
            a[i]=b[t];
            t++;
            if(b[t]=='\0')
            {
                break;
            }       
        }   
    }
    if(t<6)
    {
        for(i=0;i<3;i++)
        {
            printf("%c",a[i]);
        }
        for(i=0;i<strlen(b);i++)
        {
            printf("%c",b[i]);
        }
        for(i=9;i<strlen(a);i++)
        printf("%c",a[i]);   
    }
    else
        printf("%s",a);
    printf("\n");

}