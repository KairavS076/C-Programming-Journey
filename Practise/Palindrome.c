// Palindrome Number
#include <stdio.h>


int main()
{
    int n,digit;
    int rev=0;
    printf("Enter the number to be checked whether it is palindrome or not : ");
    scanf("%d",&n);
    int org=n;
    if(n<10)
    {
        printf("Invalid input");
    }
    else
    {
        while(n>0)
        {
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        if(org==rev)
        {
            printf("The given number is Palindrome");
        }
        else
        {
            printf("The given number is not a palindrome");
        }
    }
    return 0;
}
