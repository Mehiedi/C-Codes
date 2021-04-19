#include<stdio.h>
int main()
{
    int x;
    printf("Enter An Integer : ");
    scanf("%d",&x);
    if (x%2==0)
    printf("\a\nEven!\n");
    if (x!=0) //we can also use (else) in here
    printf("\a\nOdd!\n");
    return 0;
}

