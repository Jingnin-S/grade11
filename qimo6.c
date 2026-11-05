#include<stdio.h>
int main(void)
{
    int map[20];   //存放元素的数组
    int mark[20];  //存放元素元素标记的数组
    int a,i;
    /*请补全代码*/
    printf("Please input the number of elements:");
    scanf("%d",&a);
    printf("Please input the elements:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&map[i]);
    }
    printf("\n");
    printf("The output elements are:");
    for(i=0;i<a-1;i++)
    {
        mark[0]=1;
        if(map[i]<map[i+1])
        {
            mark[i+1]=1;
        }
        else
        mark[i+1]=0;
        if(mark[i]==1)
        {
            printf("%d ",map[i]);
        }

    }
    if(mark[a-2]==1)
    {
        printf("%d",map[a-1]);
    }
    printf("\n");
}
