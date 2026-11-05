#include<stdio.h>

void main()

{

    int a[5]={10,14,8,22,16},i,j=0,k;

    for(i=1;i<5;i++)

    {

        if(a[i]!=a[i+1])

    {

        k=a[0];

        for(j=0;j<4;j++)

        a[j]=(a[j]+a[j+1])/2;

        a[9]=(a[9]+k)/2;

        j++;

    }

    else break;

    }

    printf("经过次数：%d\n",j);

    printf("每人各有：%d\n",a[1]);

}