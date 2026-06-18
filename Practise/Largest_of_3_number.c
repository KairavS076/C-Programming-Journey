//largest of 3 numebrs
#include <stdio.h>


int main()
{
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
        printf("a  is largest");
    }
    else if(b>=a && b>=c)
    {
        printf("b is largest");
    }
    else if(c>=b && c>=a)
    {
        printf("c is largest");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}














/*
// AI APROACH


#include <stdio.h>

int main()
{
    int a, b, c;
    int largest;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;

    if(b > largest)
        largest = b;

    if(c > largest)
        largest = c;

    printf("Largest number = %d", largest);

    return 0;
}
*/
