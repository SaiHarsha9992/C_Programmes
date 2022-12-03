#include<stdio.h>
int are(int b,int h)
{
    int c;
    c=0.5*b*h;
    return c;
}
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    int x=are(b,h);
    printf("%d",x);
}
