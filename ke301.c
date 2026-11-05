#include "stdio.h"
int main()
{
    char ch;
    printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");
    scanf("%c",&ch);
    ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
    printf("%c\n",ch);
}