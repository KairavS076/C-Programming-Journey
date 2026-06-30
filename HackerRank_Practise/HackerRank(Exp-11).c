/*HackerRank challenge - 11 , to input array from user and print the sum of elements of array
1)using normal operation
2)using pointers

#include <stdio.h>
int main()
{
    //Solving array using normal operation:
    int n;
    printf("Enter the size of array( 1<=n<=1000): ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    if(n<=1000 && n>=1)
    {
        for(int i=0;i<n;i++)
        {
            printf("\nEnter the value of array for index %d: ",i);
            scanf("%d",&arr[i]);
        }
    }
    else
    {
        printf("Invalid input");
    }
    for(int i=0;i<n;i++)
    {
            printf("%d ",arr[i]);
    }
    //To find the sum:
    for(int i=0;i<n;i++)
    {
            sum=sum+arr[i];
    }
    printf("\nThe sum of entered input array elements are : %d",sum);
    return 0;
}

*/

//Using pointers

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array( 1<=n<=1000): ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    int sum=0;
    if(n<=1000 && n>=1)
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter the element associated to array of index %d : ",i);
            scanf("%d",(p+i));
        }
    }
    else
    {
        printf("Invalid input");
    }
    printf("\nThe elements of the array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));

    }
    for(int i=0;i<n;i++)
    {
            sum=sum+*(p+i);
    }

    printf("\nThe sum of entered input array elements are : %d",sum);

    return 0;
}

