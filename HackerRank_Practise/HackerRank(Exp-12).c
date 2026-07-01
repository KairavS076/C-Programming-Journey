// HackerRank Challenge - 12 , Reversing the array

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int rev[n];
    if(n<=1000 && n>=1)
    {
    for(int i=0;i<n;i++)
    {
        printf("Enter the element of the array for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe reverse of the array is given by : ");
    for(int j=0;j<n;j++)
    {
        rev[j]=arr[n-1-j];
        printf("%d ",rev[j]);
    }
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}
