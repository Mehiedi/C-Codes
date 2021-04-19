#include<stdio.h>
int main ()
{
    int choice;
    float temp, convertedtemp;
    printf("Temperature conversion Menu!\n");
    printf("\n1. Fahrenheit to Celcius.");
    printf("\n2. Celcius to Fahrenheit.");
    printf("\n3. Fahrenheit to kelvin.");
    printf("\n4. Celcius to kelvin.");
    printf("\n5. kelvin to Celcius.");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        printf("\nEnter Fahrenheit Temperature : ");
        scanf("%f",&temp);
        convertedtemp = (temp-32)/1.8;
        printf("The Temperature in Celcius is : %.2f\n",convertedtemp);
    }
    break;
    case 2:
    {
        printf("\nEnter Celcius Temperature : ");
        scanf("%f",&temp);
        convertedtemp = (1.8*temp)+32;
        printf("The Temperature in Fahrenheit is : %.2f\n",convertedtemp);
    }
    break;
    case 3:
    {
        printf("\nEnter Fahrenheit Temperature : ");
        scanf("%f",&temp);
        convertedtemp = 273.15 +((temp - 32.0) * (5.0/9.0));
        printf("The Temperature in Kelvin is : %.2f\n",convertedtemp);
    }
    break;
    case 4:
    {
        printf("\nEnter Celcius Temperature : ");
        scanf("%f",&temp);
        convertedtemp = (temp+273.15);
        printf("The Temperature in Kelvin is : %.2f\n",convertedtemp);
    }
    break;
    case 5:
    {
        printf("\nEnter Kelvin Temperature : ");
        scanf("%f",&temp);
        convertedtemp = (temp-273.15);
        printf("\nThe Temperature in Celcius is : %.2f\n",convertedtemp);
    }

    break;
    default:
        printf("\a\nInvalid Choice!\n");
    }
    return 0;
}
