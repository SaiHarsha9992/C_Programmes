#include<stdio.h>
void temp(int t);
int main()
{
    int t;
    scanf("%d",&t);
    temp(t);
}
void temp(int t)
{
    if(t<=20)
    {
        printf("COLD");
    }
    else
    {
        printf("HOT");
    }
}
