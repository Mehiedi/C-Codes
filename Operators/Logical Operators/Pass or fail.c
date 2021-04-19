#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d",&marks);
    if (marks>=33)
        printf("\a\nYou're Passed!\n");
    else
        printf("\a\nYou're Failed!\n");
    return 0;
}
