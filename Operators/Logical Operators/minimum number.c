//using Logical AND operator!
#include<stdio.h>
int main ()
{
    int x , y , z;
    printf("Enter Numbers : ");
    scanf("%d %d %d",&x,&y,&z);
    if (x<y && x<z)
        printf("\a\nMinimum Number is : %d\n ",x);
    else if (y<x && y<z)
        printf("\a\nMinimum Number is : %d\n ",y);
    else if (z<x && z<y)
        printf("\a\nMinimum Number is : %d\n ",z);
    else
        printf("\a\nNumbers Are Equal!\n");

    return 0;
}
