//HackerRank Challenge - 3 , task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
#include <stdio.h>

int main()
{
    int a,b;
    float x,y;
    printf("Enter the 2 integer data type :");
    scanf("%d %d",&a , &b);
    printf("\nEnter the 2 float data type :");
    scanf("%f %f",&x ,&y);
    printf("\n%d %d",a+b,a-b);
    printf("\n%0.1f %0.1f",x+y,x-y);
    return 0;
}
