#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any Letter : ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\a\nVowel!\n");
        break;
    default:
        printf("\a\nConsonant!\n");
    }
    return 0;
}
