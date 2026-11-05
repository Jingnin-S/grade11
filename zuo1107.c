#include "stdio.h"
int main()
{
    int i;
    int a[10]= {91,97,72,43,59,77,65,84,81,69};
    int b=0,c=0,d=0,e=0,f=0;
    for(i=0;i<10;i++)
    {
        switch(a[i]>0&&a[i]<60?1:a[i]>59&&a[i]<70?2:a[i]>69&&a[i]<80?3:a[i]>79&&a[i]<90?4:a[i]>89&&a[i]<100?5:6)
        {
            case 1:f++;
            break;
            case 2:e++;
            break;
            case 3:d++;
            break;
            case 4:c++;
            break;
            case 5:b++;
            break;
        }
    }
    printf("等级A 等级B 等级C 等级D 等级F人数分别为:%d,%d,%d,%d,%d\n",b,c,d,e,f);

}