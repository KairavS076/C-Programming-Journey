//Prime number
#include <stdio.h>


int main()
{
    int n;
    printf("Enter the number to be checked whether prime or not :");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("\nInvalid input");
    }
    else if(n==2)
    {
        printf("\n2 is a prime number");
    }
    else
    {
        for(int i=2;i<n-1;i++)
        {
            if(n%i==0)
            {
                printf("\nIt is a composite number");
                goto end;
            }
        }
        printf("\n It is a prime number");
    }

  end:  return 0;
}
