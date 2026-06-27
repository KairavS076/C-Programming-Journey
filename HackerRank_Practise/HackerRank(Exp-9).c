//HackerRank Challenge - 9 , Bitwise operation
#include <stdio.h>
int main()
{
    int n,k;
    int and,or,xor;
    printf("Enter n:");
    scanf("%d",&n);
    printf("\nEnter k:");
    scanf("%d",&k);
    int a=0;
    int o=0;
    int x=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            and=i&j;
            or=i|j;
            xor=i^j;
            if(and>a && and<k)
            {
                a=and;
            }
            if(or>o && or<k)
            {
                o=or;
            }
            if(xor>x && xor<k)
            {
                x=xor;
            }
        }
    }
    printf("%d",a);
    printf("%d",o);
    printf("%d",x);
    return 0;
}
