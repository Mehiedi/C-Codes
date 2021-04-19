#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter First Number  : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);
    if (x>y)
        printf("\a\nLarge Number is : %d\n",x);
    else if (x<y)
        printf("\a\nLarge Number is : %d\n",y);
    else
        printf("\a\nNumbers are equal!\n");
    return 0;
}

