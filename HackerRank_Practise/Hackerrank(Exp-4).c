//HackerRank(Challenge - 4) , Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int greatest=a;
    if(b>greatest)
    {
        greatest=b;
    }
    if(c>greatest)
    {
        greatest=c;
    }
    if(d>greatest)
    {
        greatest=d;
    }
    return greatest;
}

int main()
{
    int v,x,y,z,Largest;
    printf("Enter the 4 input numbers :");
    scanf("%d %d %d %d",&v,&x,&y,&z);
    Largest= max_of_four(v,x,y,z);
    printf("The greatest of the 4 numbers is :%d",Largest);
    return 0;
}
