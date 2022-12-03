#include<stdio.h>
float ci(int h)
{
    float c;
    c=2.54*h;
    return c;
}
int main()
{
    int h;
    scanf("%d",&h);
    float x1=ci(h);
    printf("%0.2f",x1);
    
}
