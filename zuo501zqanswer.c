#include "stdio.h"
int main()
{
int a[5]={10,14,8,22,16},b[5],c,i;
for(i=0;;)
{
for(c=0;c<5;c++){
if(a[c]%2!=0)
a[c]=a[c]+1;
b[c]=a[c]/2;
}
a[0]=b[0]+b[4];
for(c=1;c<5;c++)
{
a[c]=b[c]+b[c-1];
}
i++;
if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]) break;
}
printf("需要这样做%d次,每个人手中的糖块数量才相等,数量为%d块\n",i,a[1]);
}