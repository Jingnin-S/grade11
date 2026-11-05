#include <stdio.h>
#define N 10

int main()
{
    int node[N][2]={{10,3},{12,5},{13,13},{14,9},{1,4},{18,3},{16,10},{19,1},{8,2},{19,8}};
    int flag=0;
    /*Çë²¹È«´úÂë*/
    int i,a,b;
    printf("Please input the coordinate(x,y):");
    scanf("%d %d",&a,&b);
    for(i=0;i<N;i++)
    {  
        if(node[i][0]==a&&node[i][1]==b)
        {
            printf("The node is found and the index is %d\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The node is not found\n");
    }
}
