
#include<stdio.h>
void cha(char ch);
int main()
{
    char ch;
    scanf("%c",&ch);
    cha(ch);
}
void cha(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}



