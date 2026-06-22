//Call By Refrence Code , Given 2 numbers a and b , add and substract them and assign them to a and b using call by reference
#include <stdio.h>

int call_by_reference(int *x,int *y)
{
    int temp,temp2;
    temp=*x + *y;
    temp2= *x - *y;
    *x=temp;
    *y=temp2;
    return ;
}

int main()
{
    int a,b;
    printf("Enter the 2 inputs a and b :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nThe original value of a is %d",a);
    printf("\nThe original value of b is %d",b);
    int operation=call_by_reference(&a,&b);
    printf("\nThe new value of a is %d",a);
    printf("\nThe new value of b is %d",b);

    return 0;
}
