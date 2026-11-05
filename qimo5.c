#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char c;
    scanf("%s %c",str,&c);
    printf("\n");
    
    int i,flag=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            str[i]='a';
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Not found\n");

    }
    else
    printf("%s\n",str);
}