#include "stdio.h"
#define N 10
int max,min;/*定义全局最大值，最小值变量*/
int avmaxmin( int score[])
{
  
  max=0;min=100;
  int ave=0;
  for(int i=0;i<N;i++)
  {
      if(score[i]>max)
      {
          max=score[i];        
      }
      if(score[i]<min)
      {
          min=score[i];
      }
    ave=ave+score[i];

  }
  return(ave);
  return(max,min);
}
int main()
{
  int score[10]={56,78,45,78,98,46,55,67,87,90},ave;
  ave= avmaxmin(score);
  printf("average =%d,max=%d,min=%d\n",ave/N,max,min);
}