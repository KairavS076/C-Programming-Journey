//Program to practise string functions :
#include <stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter the string s1:");
    scanf("%s",s1);
    printf("\nEnter the string s2:");
    scanf("%s",s2);

    printf("\nConcatenation of the user entered strings is given by : %s",strcat(s1,s2));
    printf("\nLength of the user entered string s1 is given by : %d",strlen(s1));
    printf("\nLength of the user entered string s2 is given by : %d",strlen(s2));
    printf("\nReverse of the user entered string s1 is given by : %s",strrev(s1));
    printf("\nReverse of the user entered string s2 is given by : %s",strrev(s2));
    printf("\nComparision of the user entered strings is given by : %d",strcmp(s1,s2));
    printf("\nCopying of the user entered strings is given by : %s",strcpy(s1,s2));
    printf("\nString s1 is now : %s",s1);
    return 0;
}
