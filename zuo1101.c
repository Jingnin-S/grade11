    #include "stdio.h"
    int main()
    {
        int a[4];
        printf("input data:\n");
        for(int i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }
        if(a[3]=='\0')
        {
            printf("wrong data!\n");
        }
        else
        {
            for(int i=3;i>=0;i--)
            {    
                printf("%d",a[i]);
            }
        }
    }