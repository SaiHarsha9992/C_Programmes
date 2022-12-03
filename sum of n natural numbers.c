#include<stdio.h>
void sumoff(int n)
{
    int c;
    c=n*(n+1)/2;
    printf("%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    sumoff(n);
}
