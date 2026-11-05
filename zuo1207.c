
#include "stdio.h"

typedef struct{
int Age[16]; // 数据元素存储空间基址
int length; // 表长度
}SSTable;

int Search (SSTable ST, int key)
{
//学生增加的函数，注意查找过程中，需输出mid值，成功返回待查元素mid
int mid=0,found=0,up=ST.length-1,low=0,find;
find=key;
while(up>=low)
    {
        mid=(up+low)/2;
        printf("%d",ST.Age[mid]);
        if(ST.Age[mid]==find)
        {
            found=1;
            
            break;
        }
        else if(ST.Age[mid]>find)
        {
            up=mid-1;
            
        }
        else
        low=mid+1;
    }
    printf("\n");
    if(found)
    {
        printf("查找成功\n");

    }
    else
    printf("查找失败\n");
}

int main()
{
SSTable ST;
ST.length=15;
int a[15]= {5,10,11,15,17,19,21,25,36,38,50,51,55,57,68};
int i, val;

for(i=0; i<15;i++)
{
    ST.Age[i]=a[i];
    printf("%d",ST.Age[i]);
}
printf("\n");
//printf("%d",ST.length);
printf("请输人所要查找的元素：\n");
scanf("%d",&val);
Search (ST, val);
}
