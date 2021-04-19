#include<stdio.h>
int main ()
{
    int x;
    printf("Enter Any Value : ");
    scanf("%d",&x);
    double result = sqrt (x);
    printf("%.2lf",result);
    return 0;
}
