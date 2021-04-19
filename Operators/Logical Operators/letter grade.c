#include<stdio.h>
int main ()
{
    int mark;
    printf("Please Enter Your Marks : ");
    scanf("%d",&mark);
    if (mark>100 || mark < 0)
        printf("\a\nInvalid Marks!\n");
    else if(mark>=80 && mark<=100)
        printf("\a\nYou Have Got A+!\n");
    else if(mark>=70 && mark<=79)
        printf("\a\nYou Have Got A!\n");
    else if(mark>=60 && mark<=69)
        printf("\a\nYou Have Got A-!\n");
    else if(mark>=50 && mark<=59)
        printf("\a\nYou Have Got B!\n");
    else if(mark>=40 && mark<=49)
        printf("\a\nYou Have Got C!\n");
    else if(mark>=33 && mark<=39)
        printf("\a\nYou Have Got D!\n");
    else
        printf("\n\aSorry You're Failed!\n");
    return 0;
}
