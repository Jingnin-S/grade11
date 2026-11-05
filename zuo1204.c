#include "stdio.h"
int main()
{
    FILE *fp;
    if((fp=fopen("src.txt","w+"))==NULL)
    {
        printf("\nCan't open this file!\n");
        return 0;
    }
    
    char ch = getchar();
	while (ch != '\0')
	{
		fputc(ch, fp);
		ch = getchar();
	}
    int a[4]={0,0,0,0};
    while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
        if(ch=='a')
            a[0]++;
        else if(ch=='b')
            a[1]++;
        else if(ch=='d')
            a[2]++;
        else if(ch=='f')
            a[3]++;   
	}
    fclose(fp);
    printf("a %d b %d d %d f %d \n",a[0],a[1],a[2],a[3]);
    FILE *ep;
    if((ep=fopen("des.txt","wb+"))==NULL)
    {
        printf("\nCan't open this file!\n");
        return 0;
    } 
    fprintf(ep,"a %d b %d d %d f %d \n",a[0],a[1],a[2],a[3]);
    fclose(ep);
}