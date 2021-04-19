#include<stdio.h>
int main ()
{
    char upper;
    printf("Enter Any Uppercase Letter : ");
    scanf("%c",&upper);
    printf("\a\nThe lowercase letter is : %c\n",upper+32);
    return 0;
}
