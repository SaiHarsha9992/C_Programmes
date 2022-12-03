
#include<stdio.h>
void tri(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    tri(a,b,c);
}
void tri(int a,int b,int c)
{
    if(a==b&&b==c)
    {
        printf("Equilateral triangle");
    }
    else if(a==b||a==c||b==c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}






