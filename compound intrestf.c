#include<stdio.h>
#include<math.h>
float ci(float p,float r,float t)
{
    float c;
    c=p*pow((1+(r/100)),t)-p;
    return c;
}
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    float x=ci(p,r,t);
    printf("%0.2f",x);
}
