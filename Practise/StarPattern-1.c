/* Write a program to print star pattern , take user input 0 for printing traingular star pattern and 1 for printing reverse triangular star pattern

Traingular star pattern
*
**
***
****
*****

Reverse Triangular star pattern
*****
****
***
**
*

*/


#include <stdio.h>

int main()
{
    int r;
    printf("Enter 0 for Traingular Star Pattern or 1 for Reverse Triangular Star Pattern : ");
    scanf("%d",&r);

    if(r!=0 && r!=1)
    {
        printf("Invalid Input");
        goto end;
    }
    int n;
    printf("Enter the number of rows of pattern to be printed:");
    scanf("%d",&n);
    if(r==0)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
    if(r==1)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=n;j>=i;j--)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
    end: return 0;
}
