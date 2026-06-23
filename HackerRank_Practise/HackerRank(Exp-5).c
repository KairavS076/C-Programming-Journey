//HackerRank challenge -5 , Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of to their sum, and to their absolute difference. There is no return value, and no return statement is needed.

#include <stdio.h>

int call_by_reference(int *x,int *y)
{
    int temp,temp2;
    temp=*x + *y;
    if(*x>*y)
    {
         temp2= *x - *y;
    }
    else
    {
         temp2= *y - *x;
    }
    *x=temp;
    *y=temp2;
    return ;
}

int main()
{
    int a,b;
    printf("Enter the 2 inputs a and b :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nThe original value of a is %d",a);
    printf("\nThe original value of b is %d",b);
    int operation=call_by_reference(&a,&b);
    printf("\nThe new value of a is %d",a);
    printf("\nThe new value of b is %d",b);

    return 0;
}
