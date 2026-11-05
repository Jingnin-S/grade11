#include "stdio.h"
int main()
{
    FILE *fp;
    char str;
    
    if((fp=fopen("f1.txt","w+"))==NULL)
    {
        printf("\nCan't open this file!\n");
        return 0;
    }
    str=getchar();
    while(str!='\0')
    {
        fputc(str,fp);
        str=getchar();
    }
    rewind(fp);
    str=fgetc(fp);
    while(str!=EOF)
    {
        putchar(str);
        str=fgetc(fp);
    }
    fclose(fp);

}