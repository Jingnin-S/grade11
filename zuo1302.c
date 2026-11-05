//#include"stdafx.h"
#include "stdio.h"
#include "string.h"
#define MAXSIZE 20 // 一个用作示例的小顺序表的最大长度
#define LT(a,b) ((a)
typedef int KeyType; //定义关键字类型为整型

typedef struct
{
char name[20];
char num[6];
}STU_OtherInfo;

typedef struct //记录类型
{
STU_OtherInfo otherinfo; //其它数据项，具体类型在主程中定义
KeyType score; //关键字项
}STU_RecType;

typedef struct //顺序表类型
{
STU_RecType r[MAXSIZE+1]; //r[0]闲置或用作哨兵单元
int length; //顺序表长度
} Sqlist;
void DirecctInsertSort(Sqlist *L)
{
//对顺序表L作直接插入排序（升序列）
//学生增加的函数
    struct Sqlist;
    int i,k,t,j=0;
    //for(i=1;i<L->length;i++)
    {
      //  k=i;
        //t=L->r[i].score;
        //for(j=i-1;j>=0&&L->r[i].score>t;j--)
//        {
//            L->r[j+1].score=L->r[j].score;
//            k=j;
//        }
//        L->r[j].score=t;
  }
    for(i=1;i<L->length;i++)
   {
        L->r[0].score=L->r[i].score;
        j=i-1;
        while(L->r[0].score<L->r[j].score)
        {
            L->r[j+1].score=L->r[j].score;
            j--;
        }
        L->r[j+1].score=L->r[0].score;
    }
    for(i=1;i<L->length+1;i++)
    {
        printf("%s %s %d\n",L->r[i].otherinfo.name,L->r[i].otherinfo.num,L->r[i].score);
    }   

}
void BInsertSort(Sqlist *L)
{//对顺序表L作折半插入排序。(按照降序)
//学生增加的函数
    int i,j,low=0,high=0,mid,t=0;
    for(i=1;i<L->length;i++)
    {
        high=i-1;
        low=0;
        t=L->r[i].score;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(L->r[mid].score>t)
            high=mid-1;
            else
            low=mid+1;
        }
        for(j=i;j>low;j--)
        {
            L->r[j].score=L->r[j-1].score;
        }
        L->r[low].score=t;
    } 
    for(i=L->length;i>0;i--)
    {
        printf("%s %s %d\n",L->r[i].otherinfo.name,L->r[i].otherinfo.num,L->r[i].score);
    }  
}
int main()
{
int i;
Sqlist L;
L.length=3;
//L.r[0]作为哨兵或者临时缓存区
strcpy(L.r[1].otherinfo.name,"James");
strcpy(L.r[1].otherinfo.num,"00007");
L.r[1].score=85;

strcpy(L.r[2].otherinfo.name,"Amy");
strcpy(L.r[2].otherinfo.num,"00010");
L.r[2].score=90;

strcpy(L.r[3].otherinfo.name,"Zoe");
strcpy(L.r[3].otherinfo.num,"00010");
L.r[3].score=60;

//打印排序对象
printf("初始数据为：\n");
for (i = 1; i<=L.length;i++)
{
    printf("%s %s %d\n",L.r[i].otherinfo.name,L.r[i].otherinfo.num,L.r[i].score);
}
printf("直接插入排序后数据：\n");
DirecctInsertSort(L.r);
printf("折半插入排序后数据：\n");
BInsertSort(L.r);
}

