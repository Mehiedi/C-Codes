#include<stdio.h>
int main ()
{
    int year;
    printf("Enter Any Year : ");
    scanf("%d",&year);
    if(year%400==0)
        printf("\a\nIt's a Leap Year!");
    else if (year%4==0 && year%100!=0)
        printf("\a\nIt's a Leap Year!");
    else
        printf("\a\nIt's Not a Leap Year.\n\nThank You!\n");
    return 0;
}
