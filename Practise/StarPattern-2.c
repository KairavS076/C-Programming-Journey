//Star Pattern -2
/*
Print this pattern

1
12
123
1234

*/

#include <stdio.h>


int main()
{
    int r;
    printf("Enter the number of rows to be printed in this pattern :");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
