//You have to print the character, in the first line. Then print string in next line. In the last line print the sentence, .
#include <stdio.h>


int main()
{
    char ch;
    char s[100];
    char sen[100];
    printf("Enter the input character :");
    scanf("%c",&ch);
    printf("Enter the input string :");
    scanf("%s",s);
    getchar();
    printf("Enter the input sentence :");
    scanf("%[^\n]%*c",sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}

