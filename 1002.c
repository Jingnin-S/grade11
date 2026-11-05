
#include <stdio.h>
int main()
{
    FILE *fp;
    int i,k=0,n=0;
    fp=fopen("d1.dat","w");
    for(i=1;i<4;i++)
    {
        fprintf(fp,"%d",i);
    }
    fclose(fp);
    fp=fopen("d1.dat","r");
    fscanf(fp,"%d%d",&k,&n);
    printf("%d %d\n",k,n);
    fclose(fp);
}