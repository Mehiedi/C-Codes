#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("Enter an Operator (+ , - ,* ,/) : ");
    scanf("%c",&op);
    printf("\nEnter Two Numbers : ");
    scanf("%lf %lf",&num1,&num2);
    switch(op)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n",num1,num2,num1*num2);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2);
        break;
    default:
        printf("\a\nError! Invalid Operator!\n");

    }
    return 0;
}
