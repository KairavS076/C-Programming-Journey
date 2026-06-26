//HackerRank challenge - 8 , Sum of digits of a 5 digit number
#include <stdio.h>
int main()
{
    int n,digit;
    int sum=0;
    printf("Enter a 5 digit number :");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("\nThe sum of the digits of entered number is : %d",sum);
    return 0;
}
