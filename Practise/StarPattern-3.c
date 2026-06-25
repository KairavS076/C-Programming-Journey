/* Write a program to print the corresponding star pattern :

1
22
33
4444
55555

*/
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows for the pattern to be printed :");
    scanf("%d",&r);
    if(r<1)
    {
        printf("Invalid input");
    }
    else
    {
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
    }
    return 0;
}
