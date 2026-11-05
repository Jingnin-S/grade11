#include "stdio.h"
struct staff
{
char name[20];
int bsalary;
int psalary;
};
int main()
{
    struct staff stu;
    struct staff d[5]={{"李红",945,1400},{"刘强",940,1450},{"赵刚",1000,1500},{"王华",980,1470},{"张燕",900,1350}};
    int k= sizeof(stu)/sizeof(struct staff);
    for(int i=0;i<k+4;i++)
    {
        printf("%s %d\n",d[i].name,d[i].bsalary+d[i].psalary);
    }
    int max=0,j=0,t=0,min=1000000;
    for(int i=0;i<5;i++)
    {
        
        char b[3][3];
        if(d[i].bsalary+d[i].psalary>max)
        {
            max=d[i].bsalary+d[i].psalary;
            j=i;
        }
        if(d[i].bsalary+d[i].psalary<min)
        {
            min=d[i].bsalary+d[i].psalary;
            t=i;
        }
    }
    printf("工资总额最大者是: %s %d\n",d[j].name,max);
    printf("工资总额最小者是: %s %d\n%d",d[t].name,min,k);
    
}