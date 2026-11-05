#include "stdio.h"
#include "string.h"
int main()
{
    char *p,b;
    int i,j;
    char a[20]="baacda";
    scanf("%c",&b);
    p=&a[0];
    i=strlen(a);
    while(i)
    {
        if(b==*(p+i))
        {
            *(p+strlen(a))=b;
            printf("%s",a);
            break;
        }
        i--;
    }
    
    
}