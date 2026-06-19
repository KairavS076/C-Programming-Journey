//Reversing a number
#include <stdio.h>


int main()
{
    int n,digit;
    int rev=0;
    printf("\nEnter the number to be reversed :");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("\nReverse of the number entered is : %d",rev);
    return 0;
}
