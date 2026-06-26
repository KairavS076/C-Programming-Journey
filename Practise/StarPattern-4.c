/* Star Pattern - 4 , make the following pattern :

   *
  ***
 *****
*******

*/

#include <stdio.h>

int main()
{
    int r;
    printf("Enter the number of rows to be printed for the given pattern :");
    scanf("%d",&r);
    for(int i=1; i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            printf("\t");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
