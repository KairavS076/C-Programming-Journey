#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("The Multiplication Table of entered no is :\n");
    /*printf("%d x 1 = %d",a,a*1);
    printf("%d x 2 = %d",a,a*2);
    printf("%d x 3 = %d",a,a*3);
    printf("%d x 4 = %d",a,a*4);
    printf("%d x 5 = %d",a,a*5);
    printf("%d x 6 = %d",a,a*6);
    printf("%d x 7 = %d",a,a*7);
    printf("%d x 8 = %d",a,a*8);
    printf("%d x 9 = %d",a,a*9);
    printf("%d x 10 = %d",a,a*10);
*/

for( int n=1  ; n<=10 ; n++)
{
    printf("%d X %d = %d\n",a,n,a*n);

}
    return 0;
}
