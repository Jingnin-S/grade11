#include "stdio.h"
int main()
{
    int a,b,c,d,e,f,g;
    printf("输入课程类型（1.公共课；2.专业课；3.实验课）\n");
    scanf("%d\n",&a);
    printf("输入教师职称（1.教授；2.副教授；3.讲师；4.助教）\n");
    scanf("%d\n",&b);
    printf("输入学生人数：\n");
    scanf("%d\n",&c);
    printf("输入课时数：\n");
    scanf("%d\n",&d);
    if(a==1)
    {
        switch(b==1&&c<80?1:b==1&&c>=80?2:b==2&&c<80?3:b==2&&c>=80?4:b==3&&c<80?5:b==3&&c>=80?6:b==4&&c<=80?7:8)
        {
            case 1:e=70*d;
            printf("薪酬为：%d\n",e);break;
            case 2:e=70*d+(c-80)*0.2;
            printf("薪酬为：%d\n",e);break;
            case 3:e=50*d;
            printf("薪酬为：%d\n",e);break;
            case 4:e=50*d+(c-80)*0.2;
            printf("薪酬为：%d\n",e);break;
            case 5:e=35*d;
            printf("薪酬为：%d\n",e);break;
            case 6:e=35*d+(c-80)*0.1;
            printf("薪酬为：%d\n",e);break;
            case 7:e=20*d;
            printf("薪酬为：%d\n",e);break;
            case 8:e=20*d+(c-80)*0.1;
            printf("薪酬为：%d\n",e);break;
        }
    }
    if(a==2)
    {
        switch(b==1&&c<40?1:b==1&&c>=40?2:b==2&&c<40?3:b==2&&c>=40?4:b==3&&c<40?5:b==3&&c>=40?6:b==4&&c<=40?7:8)
        {
            case 1:e=85*d;
            printf("薪酬为：%d\n",e);break;
            case 2:e=85*d+(c-40)*0.3;
            printf("薪酬为：%d\n",e);break;
            case 3:e=70*d;
            printf("薪酬为：%d\n",e);break;
            case 4:e=70*d+(c-40)*0.3;
            printf("薪酬为：%d\n",e);break;
            case 5:e=40*d;
            printf("薪酬为：%d\n",e);break;
            case 6:e=40*d+(c-40)*0.1;
            printf("薪酬为：%d\n",e);break;
            case 7:e=30*d;
            printf("薪酬为：%d\n",e);break;
            case 8:e=30*d+(c-40)*0.1;
            printf("薪酬为：%d\n",e);break;
        }
    }
    if(a==3)
    {
        switch(b==1&&c<40?1:b==1&&c>=40?2:b==2&&c<40?3:b==2&&c>=40?4:b==3&&c<40?5:b==3&&c>=40?6:b==4&&c<=40?7:8)
        {
            case 1:e=60*d;
            printf("薪酬为：%d\n",e);break;
            case 2:e=60*d+(c-40)*0.4;
            printf("薪酬为：%d\n",e);break;
            case 3:e=40*d;
            printf("薪酬为：%d\n",e);break;
            case 4:e=40*d+(c-40)*0.4;
            printf("薪酬为：%d\n",e);break;
            case 5:e=30*d;
            printf("薪酬为：%d\n",e);break;
            case 6:e=30*d+(c-40)*0.3;
            printf("薪酬为：%d\n",e);break;
            case 7:e=25*d;
            printf("薪酬为：%d\n",e);break;
            case 8:e=25*d+(c-40)*0.2;
            printf("薪酬为：%d\n",e);break;
        }
    }
}