#include <stdio.h>
int age(int);//声明递归函数
int main()
{
int k= age(5);
printf("第5个人的年龄为:%d\n",k);
return 0;
}
//递归函数的实现
int age(int n)
{
  int e=10;
  for(int i=0;i<n-1;i++)
  {
      e+=2;
  }
  return(e);  
}