/*Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

if n=2
    2 2 2
    2 1 2
    2 2 2

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number n :");
    scanf("%d",&n);
    int top,bottom,left,right;
    int min=n;
    if(n>=1 && n <=1000)
    {
        for(int i=1;i<=2*n-1;i++)
        {
            for(int j=1;j<=2*n-1;j++)
            {
                top=i-1;
                bottom=2*n-1-i;
                left=j-1;
                right=2*n-1-j;
                if(top<min)
                {
                    min=top;
                }
                if(bottom<min)
                {
                    min=bottom;
                }
                if(left<min)
                {
                    min=left;
                }
                if(right<min)
                {
                    min=right;
                }
                printf("%d ",n-min);
                min=n;
            }
            printf("\n");

        }
    }
    return 0;
}
