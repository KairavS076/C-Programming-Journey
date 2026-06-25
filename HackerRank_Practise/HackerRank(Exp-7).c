/* For each integer in the interval[a,b]  (given as input) :

    If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
    Else if n>9 and it is an even number, then print "even".
    Else if n>9 and it is an odd number, then print "odd".

*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter inputs a,b :");
    scanf("%d",&a);
    scanf("%d",&b);
    char *num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++)
    {
        if(i>=1 && i<=9)
        {
            printf("%s",num[i]);
            printf("\n");
        }
        else if(i>9)
        {
            if(i%2==0)
            {
                printf("even");
                printf("\n");
            }
            else
            {
                printf("odd");
                printf("\n");
            }
        }
    }
    return 0;
}
