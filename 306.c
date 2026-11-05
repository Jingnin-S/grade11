#include "stdio.h"

int main()
{
    printf("char:%3d byte\n",sizeof('char'));
    printf("short:%3d byte\n",sizeof('short'));
    printf("int:%3d byte\n",sizeof('int'));
    printf("long:%3d byte\n",sizeof('long'));
    printf("unsigned:%3d byte\n",sizeof('unsigned'));
    printf("float:%3d byte\n",sizeof('float'));
    printf("double:%3d byte\n",sizeof('double'));
    printf("long double:%3d byte\n",sizeof('long double'));
}