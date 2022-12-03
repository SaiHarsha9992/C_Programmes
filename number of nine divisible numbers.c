#include<stdio.h>
void nine(int n);
int main()
{
    int n;
    scanf("%d",&n);
    nine(n);
}
void nine(int n)
{
    if(n%9==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}





