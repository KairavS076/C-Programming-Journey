//Recursive function
#include <stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
int main()
{
    int x;
    printf("Enter the number whose factorial is to be calculated :");
    scanf("%d",&x);
    int f= fact(x);
    printf("\nFactorial is : %d",f);
    return 0;
}
