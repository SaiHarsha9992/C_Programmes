#include<stdio.h>
int bri(int x,int y,int z)
{
    int c;
    c=(z-y)/x;
    return c;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int n=bri(x,y,z);
    printf("%d",n);
}
