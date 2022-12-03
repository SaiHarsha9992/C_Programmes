#include<stdio.h>
int avg(int a,int b,int c)
{
    int n;
     n=3*c-(a+b);
     return n;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=avg(a,b,c);
    printf("%d",x);
}
