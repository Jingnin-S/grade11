#include "stdio.h"
int main()
{
    int c=8;
    switch (c<10?1:c<25?2:c<35?3:4)
    {
        case 1:
            printf("%d`C有点冷\n",c);break;
        case 2:
            printf("%d`C正合适\n",c);break;
        case 3:
            printf("%d`C有点热\n",c);break;
        default:
            printf("%d`C太热了\n",c);

    }
}