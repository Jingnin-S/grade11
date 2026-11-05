#include "stdio.h"
#include "math.h"
int checkingArmstrong(int num, int dn)
{
    int b=0,c,d,e,f;
    c=num/1000;
    d=num/100-c*10;
    e=num/10-c*100-d*10;
    f=num-c*1000-d*100-e*10;
    b=pow(c,4)+pow(d,4)+pow(e,4)+pow(f,4);
    if(b==num)
    return 1;
    else
    return 0;
}

int main() {
  int num, result=0;
  printf("Enter an integer with 4 digits: ");
  scanf("%d",&num);
  if (checkingArmstrong(num, 4) ==1 ) 
printf("%d is an Armstrong number.", num);
  else 
printf("%d is not an Armstrong number.", num);
  return 0;
}
