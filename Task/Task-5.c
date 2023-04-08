#include<stdio.h>
int main()
{
    char v;

    printf("Enter an Alphabet:");
    scanf("%c", &v);

    if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
}