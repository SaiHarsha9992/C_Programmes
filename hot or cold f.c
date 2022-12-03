#include<stdio.h>
int horc(int t)
{
    if(t>20)
    {
        printf("HOT");
    }
    else
    {
        printf("COLD");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int x=horc(t);
    printf("",x);
}
