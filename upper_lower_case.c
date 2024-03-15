// Write a "c" program to print a character in upper case and lower case::

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter The Character::");
    scanf("%c",&ch);

    printf("The Upper Case is %c to Lower Case %c",ch,ch+32);

    return 0;
}