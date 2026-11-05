#include "stdio.h"
int i=1; //汉诺塔移动的步数累计

//将编号为n的圆盘从x移到z,
void move(char x, int n, char z)
{   
printf("第%d步:将%d号盘子%c---->%c\n",i++,n,x,z);
}

//将塔座x上由小到大且自上而下编号为1至n的n个圆盘按规
// 则搬到塔座z上, y可用作辅助塔座
void hanoi(int n, char x, char y, char z)
{
    if(n==0)
    return;
    hanoi(n-1,x,z,y);
    move(x,n,z);
    hanoi(n-1,y,x,z);
}
void main (void)
{
printf("请输入盘子的个数:\n");
int n;
scanf("%d",&n);
char x='A',y='B',z='C';
printf("盘子移动情况如下:\n");
hanoi(n,x,y,z);
}