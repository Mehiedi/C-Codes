#include <stdio.h>
void main()
{
int num1, num2, num3, large;
printf("Enter any three number: ");
scanf("%d%d%d",&num1,&num2,&num3);
large= num1>num2 ? (num1>num3 ? num1:num3) : (num2>num3 ? num2:num3);
printf("Largest Number is: %d",large);
getch();
return 0;
}
