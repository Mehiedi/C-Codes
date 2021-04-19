#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter Any Letter : ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
        printf("\a\nIt's Capital letter!\n");
    else if (ch>='a' && ch<='z')
        printf("\a\nIt's a Small Letter!\n");
    else
        printf("\a\nIt's Not a letter!\n");
    return 0;
}
