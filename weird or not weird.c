
#include<stdio.h>
void weird(int n);
int main()
{
    int n;
    scanf("%d",&n);
    weird(n);
}
void weird(int n)
{
    if(n%2==1)
    {
        printf("weird");
    }
    else
    {
        if(2<=n>=5)
        {
            printf("not weird");
        }
        else if(6<=n>=20)
        {
            printf("weird");
        }
        else
        {
            printf("not weird");
        }
    }
}




