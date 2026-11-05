#include<stdio.h>
struct clock
{
    int hour;
    int minute;
    int second;
}ck;
void update(void)
{
    ck.second++;
    if(ck.second==60)
    {
        ck.second=0;
        ck.minute++;
    }
    if(ck.minute==60)
    {
        ck.minute=0;
        ck.hour++;
    }
    if(ck.hour==24)
    {
        ck.hour=0;
    }
}
void display(void)
{
    printf("%2d:%2d:%2d\r",ck.hour,ck.minute,ck.second);
}
void delay(void)
{
    long t;
    for(t=0;t<50000000;t++)
    {

    }
}
int main()
{
    long i;
    ck.hour=ck.minute=ck.second=0;
    for(i=0;i<100000;i++)
    {
        update();
        display();
        delay();
    }
    return 0;
}