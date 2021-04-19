#include<stdio.h>
int main ()
{
    char lower;
    printf("Enter Any Lowercase Letter : ");
    scanf("%c",&lower);
    printf("\a\nThe Uppercase letter is : %c\n",lower-32);
    return 0;
}
