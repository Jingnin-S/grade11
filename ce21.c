#include "stdio.h"
int main()
{
    FILE *fp1;
    char str[100];
    if((fp1=fopen("idata.txt","w+"))==NULL)
    {

        
        printf("\n cannot open\n");
        return 0;
    }
    fwrite(data,sizeof(str),100,fp1);


    while(fgets(str,100,fp1)!=NULL)
    {
        printf("%s\n",str);
       
    }
    fclose(fp1);
}