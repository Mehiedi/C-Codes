#include<stdio.h>
int main ()
{
    int lower,upper;
    printf("Enter Any Lowercase Letter : ");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("\nUppercase letter : %c\n",upper);
    return 0;
}
