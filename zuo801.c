#include "stdio.h"
struct student
{
char ID[20];
char name[20];
char sex[10];
char address[50];
int math;
int computer;
int chinese;
};
int main()
{
    struct student stu;
    printf("请输入学号:\n");
    printf("请输入姓名:\n");
    printf("请输入地址:\n");
    printf("请输入数学成绩:\n");
    printf("请输入计算机成绩:\n");
    printf("请输入语文成绩:\n");
    printf("打印该学生的信息:\n");
    scanf("%s\n", stu.ID);
    scanf("%s\n", stu.name);
    
    scanf("%s\n",stu.address);
    scanf("%d\n",&stu.math);
    scanf("%d\n",&stu.computer);
    scanf("%d\n",&stu.chinese);
    printf("学号:%s\n",stu.ID);
    printf("姓名:%s\n",stu.name);
    printf("地址:%s\n",stu.address);
    printf("数学:%d\n",stu.math);
    printf("计算机:%d\n",stu.computer);
    printf("语文:%d\n",stu.chinese);


}