#include "stdio.h"
struct student
{
    char ID[10];
    char name[10];
    int age;
}stu[3];
int main()
{
    FILE *fp;
    int i;
    if((fp=fopen("student.txt","r"))==NULL)
    {
        printf("the file cannot openned\n");
        return 0;
    }
    for(i=0;i<3;i++)
        fscanf(fp,"%s %s %d\n",stu[i].ID,stu[i].name,&stu[i].age);
    for(i=0;i<3;i++)
        printf("%s %s %d\n",stu[i].ID,stu[i].name,stu[i].age);
}