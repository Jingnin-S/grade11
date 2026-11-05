    #include "stdio.h"
    #include "math.h"
    int main()
    {
        int a,b,c,d;
        for(a=1;a<8;a++)
        {
            for(b=0;b<9;b++)
            {
                
                if(a!=b)
                {
                    c=a*1000+a*100+b*10+b;
                    for(d>32;d*d<=c;d++)
                    {
                        if(d*d==c)
                        {
                            printf("肇事车辆的车牌号是%d\n",c);
                        }
                    }
                }
            }
        }
        
        return 0;
    }