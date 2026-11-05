#include "stdio.h"

void main()
{
    int num=10;
    int *ptr1=num;
    int **ptr2=&ptr1;
    ptr1=&num;


    /***补全代码***/
    printf("变量num=%d\n",num);
    printf("变量num的地址是：%p\n",ptr1);
    printf("一重指针变量ptr1指向的值是: %d\n",*ptr1);
    printf("一重指针变量ptr1里面存的地址值是: %p\n",&*ptr1);
    printf("一重指针变量ptr1本身的地址值是: %p\n",&ptr1);
    printf("二重指针变量ptr2本身的地址值是: %p\n",&ptr2);
    printf("二重指针变量ptr2里存的地址值是:%p\n",&*ptr2);
    printf("二重指针变量ptr2指向的地址是: %p\n",&**ptr2);
    printf("二重指针变量ptr2经过双重指针操作，指向的值是: %d\n",**ptr2);
}