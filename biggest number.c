#include<stdio.h>
int bors(int a,int b)
{
    return(a>b?a:b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=bors(a,b);
    printf("%d",x);
}
