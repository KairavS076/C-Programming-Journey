//Armstrong number
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int sum=0;
    int digit;
    int count=0;
    printf("Enter the number to be checked whether armstrong or not :");
    scanf("%d",&n);
    int org=n;
    int d=n;
    if(n<0)
    {
        printf("Invalid input");
    }
    while(d>0)
    {
        d=d/10;
        count++;
    }
    printf("The size of the number is : %d",count);
    while(n>0)
    {
        digit=n%10;
        int result=(int)pow(digit,count);
        sum=sum + result;
        n=n/10;
    }
    if(org==sum)
    {
        printf("\nIt is a Armstrong number:");
    }
    else
    {
        printf("\nNot a Armstrong number");
    }
    return 0;
}
