#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i=i+2)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
