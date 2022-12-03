#include<stdio.h>
int ln(int n)
{
    int c;
    c=n%100;
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=ln(n);
    printf("%0.2d",x);
}
