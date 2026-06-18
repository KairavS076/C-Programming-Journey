
// Fibonacci Series using loop
#include<stdio.h>
int main()
{
    int a,b,c,n;
    a=0;
    b=1;
    printf("Enter the  term of fibonacci series : ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d",b);
    }
    else if(n>=3)
    {
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    else{
        printf("Invalid input");
    }
    return 0;

}
