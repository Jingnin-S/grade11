#include<stdio.h>
#include<string.h>
#define N 10
struct WiFiap {
    char name[32];  // WiFi ap name 
    int rssi;  // WiFi signal strength rssi 
};
struct WiFiap WiFilist[N]={{"local.wlan.bjtu", -60},{"phone.wlan.bjtu", -75}};
int len=2;  // WiFi list 当前长度

void insert(struct WiFiap WiFilist[], struct WiFiap WiFitmp)
{
    /*  请补全代码  */
    int i;
    for(i=0;i<len;i++)
    {
        if(strcmp(WiFitmp.name,WiFilist[i].name)==0)
        {
            WiFilist[i].rssi=WiFitmp.rssi;
            //strcpy(WiFilist[i].rssi,WiFitmp.rssi);
            break;
        }
        else
        {
            len++;
            strcpy(WiFilist[len-1].name,WiFitmp.name);
            WiFilist[len-1].rssi=WiFitmp.rssi;
            break;
            
        }
    }
}

int main()
{
struct WiFiap WiFitmp;
    int i;
    int cnt=0;
    printf("请输入WiFi扫描结果信息：name, rssi\n");
    scanf("%s", WiFitmp.name);
    scanf("%d", &WiFitmp.rssi);

    for(i=0; i<1; i++)
    {
        insert(WiFilist, WiFitmp); //将新的记录插入WiFilist中
    }
    printf("length of WiFi List：%d\n", len);
    printf("rssi\tname：\n");
    for(i=0; i<len; i++)
        printf("%d\t%s\n", WiFilist[i].rssi, WiFilist[i].name);
}
