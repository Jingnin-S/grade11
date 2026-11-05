extern int a;
int fact()
{
    int k,p=1;
    for(k=1;k<=a;k++)
    {
        p*=k;
    }
    return (p);
}