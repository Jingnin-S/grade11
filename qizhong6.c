#include "stdio.h"
#include "string.h"
int main()
{
    char a[100];
    scanf("%s\n",a);
    char max=a[0],min=a[0];
    int i,j,k;
    printf("The string is: %s\n",a);
    for(i=0;i<strlen(a);i++)
    {
        if(max<a[i])
        {
            k=i;
            max=a[i];
        }
        if(min>a[i])
        {
            j=i;
            min=a[i];

        }

    }

    printf("The max character is %c with index %d and the min character is %c with index %d.\n",max,k,min,j);
    char t;
    t=a[j];
    a[j]=a[k];
    a[k]=t;
    printf("%s\n",a);
}
