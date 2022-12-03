#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro,rem;
    float quo;
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;
    printf("Sum:%d\n",sum);
    printf("Difference:%d\n",diff);
    printf("Product:%d\n",pro);
    printf("Quotient:%.0f\n",quo);
    printf("Remainder:%d\n",rem);
    return 0;
}
