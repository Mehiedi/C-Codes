#include<stdio.h>
int main ()
{
    int digit;
    printf("Enter a Digit : ");
    scanf("%d",&digit);
    switch (digit)
    {
    case 0 :
        printf("\a\n\Zero!\n");
        break;
    case 1 :
        printf("\a\n\One!\n");
        break;
    case 2 :
        printf("\a\n\Two!\n");
        break;
    case 3 :
        printf("\a\n\Three!\n");
        break;
    case 4 :
        printf("\a\n\Four!\n");
        break;
    case 5 :
        printf("\a\n\Five!\n");
        break;
    case 6 :
        printf("\a\n\Six!\n");
        break;
    case 7 :
        printf("\a\n\Seven!\n");
        break;
    case 8 :
        printf("\a\n\Eight!\n");
        break;
    case 9 :
        printf("\a\n\Nine!\n");
        break;
    default:
        printf("\a\nInvalid Digit!\n");
    }
    return 0;
}
