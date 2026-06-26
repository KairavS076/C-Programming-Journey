//Strings practise
#include <stdio.h>
int main()
{
 /* Initialising and printing
    char c='a';
    char s[10]="Hello";
    char sen[100]="Hi , I am Kairav";
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s",sen);
*/

//Taking input from user and printing

    char c;
    char s[100];
    char sen[100];
    printf("Enter the character :");
    scanf("%c",&c);
    printf("Enter the string :");
    scanf("%s",s);
    printf("Enter the sentence :");
    getchar();
    scanf("%[^\n]%*c",sen);
    printf("The entered character is : %c",c);
    printf("\nThe entered string is : %s",s);
    printf("\nThe entered sentence is : %s",sen);
    return 0;
}
