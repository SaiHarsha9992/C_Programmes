
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
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}
