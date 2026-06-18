// Fibonacci Series using recursive function
#include <stdio.h>

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else if(n>2)
    {
        return fib(n-1)+ fib(n-2);
    }
    else{
        printf("Invalid Input");
    }
}

int main()
{
    int x;
    printf("Enter the n for which fibonacci series term has to be calculated : ");
    scanf("%d",&x);
    int f = fib(x);
    printf("\n The term is : %d",f);
    return 0;
}
