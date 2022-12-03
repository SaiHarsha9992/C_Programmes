#include<stdio.h>
void exam(int n);
int main()
{
    int n;
    scanf("%d",&n);
    exam(n);
}
void exam(int n)
{
    if(n>35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}



