//Unit Conversion
/*
1. kms to miles
2. inches to foot
3. cms to inches
4. pound to kgs
5. inches to meters
*/


#include <stdio.h>

int main()
{
    int n;
    printf(" Enter the Operation to be performed :");
    printf("\nPress 1 for kms to miles:");
    printf("\nPress 2 for inches to foot:");
    printf("\nPress 3 for cms to inches:");
    printf("\nPress 4 for pound to kgs:");
    printf("\nPress 5 for inches to meters:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
        float km;
        printf("\nEnter input in km :");
        scanf("%f",&km);
        float mi=0.621371* km;
        printf("Converted miles are : %f",mi);
        break;
        }

    case 2:
        {
        float in;
        printf("\nEnter input in inches :");
        scanf("%f",&in);
        float fo=0.0833*in;
        printf("Converted miles are : %f",fo);
        break;
        }

    case 3:
        {
        float cm;
        printf("\nEnter input in cm :");
        scanf("%f",&cm);
        float in=0.3937*cm;
        printf("Converted miles are : %f",in);
        break;
        }

    case 4:
        {
        float po;
        printf("\nEnter input in pounds :");
        scanf("%f",&po);
        float kg=0.4535*po;
        printf("Converted miles are : %f",kg);
        break;
        }

    case 5:
        {
        float in;
        printf("\nEnter input in inches :");
        scanf("%f",&in);
        float m=0.0254*in;
        printf("Converted miles are : %f",m);
        break;
        }
    }
    return 0;
}








/* AI APPROACH

#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    printf("1. Km to Miles\n");
    printf("2. Inches to Feet\n");
    printf("3. Cm to Inches\n");
    printf("4. Pounds to Kg\n");
    printf("5. Inches to Meters\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter kilometers: ");
            scanf("%f", &value);

            result = value * 0.621371;
            printf("Miles = %.2f\n", result);
            break;

        case 2:
            printf("Enter inches: ");
            scanf("%f", &value);

            result = value / 12;
            printf("Feet = %.2f\n", result);
            break;

        case 3:
            printf("Enter centimeters: ");
            scanf("%f", &value);

            result = value * 0.3937;
            printf("Inches = %.2f\n", result);
            break;

        case 4:
            printf("Enter pounds: ");
            scanf("%f", &value);

            result = value * 0.453592;
            printf("Kilograms = %.2f\n", result);
            break;

        case 5:
            printf("Enter inches: ");
            scanf("%f", &value);

            result = value * 0.0254;
            printf("Meters = %.2f\n", result);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
*/
