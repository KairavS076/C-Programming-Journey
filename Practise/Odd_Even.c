// EVEN / ODD
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to be checked :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n The given number is even");
    }
    else
    {
        printf("\n The number is odd");
    }
    return 0;
}
