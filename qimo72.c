#include <stdio.h>
#include <math.h>
#define N 10
#define D_TH 60   // 无线AP覆盖范围门限

// 计算AP与Node之间的距离
double calc(float x1, float y1, float x2, float y2) 
{
    /*请补全代码*/
    double k1,k2,k3;
    k1=(x1-x2)*(x1-x2);
    k2=(y1-y2)*(y1-y2);
    k3=sqrt(k1+k2);
    return k3;
}

int main()
{
    float AP[2]={50,50};
    float node[N][2]={{91,48},{63,80},{9,14},{27,42},{54,91},{95,79},{96,95},{15,65},{97,3},{95,84}};

    /*请补全代码*/
    int i,j=0;
    double t;
    for(i=0;i<N;i++)
    {
        t=calc(AP[0],AP[1],node[i][0],node[i][1]);
        if(t<=D_TH)
        {
            j++;
        }
        else
        {
            printf("the %d-th node is outside the AP coverage: %f\n",i+1,t);
        }
    }
    printf("The number of node connected to AP is %d\n",j);
}
