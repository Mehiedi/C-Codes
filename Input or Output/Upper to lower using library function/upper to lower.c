#include<stdio.h>
int main ()
{
    int lower,upper;
    printf("Enter Any Uppercase Letter : ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("\a\nLowercase letter : %c\n",lower);
    return 0;
}
