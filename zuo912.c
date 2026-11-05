#include "stdio.h" 
struct stu
{
char *name; //姓名
int num; //学号
int age; //年龄
char group; //所在小组
float score; //成绩
}stus[] = {
{"Li ping", 5, 18, 'C', 145.0},
{"Zhang ping", 4, 19, 'A', 130.5},
{"He fang", 1, 18, 'A', 148.5},
{"Cheng lin", 2, 17, 'F', 139.0},
{"Wang ming", 3, 17, 'B', 144.5}
};
void average(struct stu *ps, int len);
void display(struct stu *ps, int len);
int main()
{
int len = sizeof(stus) / sizeof(struct stu);

display(stus,len);
average(stus, len);
return 0;
}
void display(struct stu *ps, int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%s %d %d %c %.1lf\n",ps[i].name,ps[i].num,ps[i].age,ps[i].group,ps[i].score);
    }
}

void average(struct stu *ps, int len)
{
    double t=0,j=0;
    for(int i=0;i<len;i++)
    {
        t+=ps[i].score;
    }
    printf("sum=%.2f\n",t);
    printf("average=%.2lf\n",t/len);
    for(int i=0;i<len;i++)
    {
        if(ps[i].score<140)
        {
            j++;
        }
    }
    printf("num_140=%.0f\n",j);
}