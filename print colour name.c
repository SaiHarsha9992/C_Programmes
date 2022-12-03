#include<stdio.h>
void cha(char n);
int main()
{
    char n;
    scanf("%c",&n);
    cha(n);
}
void cha(char n)
{
    char V,I,B,G,Y,O,R;
    if(n=='v')
    {
        printf("Violet");
    }
    else if(n=='I')
    {
        printf("Indigo");
    }
    else if(n=='B')
    {
        printf("Blue");
    }
    else if(n=='G')
    {
        printf("Green");
    }
    else if(n=='Y')
    {
        printf("Yellow");
    }
    else if(n=='O')
    {
        printf("Orange");
    }
    else if(n=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}






