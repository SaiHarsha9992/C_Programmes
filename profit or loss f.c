#include<stdio.h>
int porl(int cp,int sp)
{
    if(sp>cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int x=porl(cp,sp);
    printf("",x);
}
