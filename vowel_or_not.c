// Write a "c" program to enter a character then determine whether it is a vowel or not::

#include<stdio.h>
int main()
{
    char letter;
    printf("Enter The Character::");
    scanf("%c",&letter);

    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'&&letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U')

    printf("%c is a vowel",letter);
    else
    printf("%c is not a vowel",letter);

    return 0;

    
}