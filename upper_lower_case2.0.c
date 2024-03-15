// Write a "c" progarm to enter any charater. it the entered character is in lower case then convart it into upper case and also in another condition::

#include<stdio.h>
int main()
{
    
    char Alphabet;
    printf("Write The Alphabet::");
    scanf("%c",&Alphabet);

    if(Alphabet>=97&&Alphabet<=122)
    {
        printf("The Alphabet is in lower case");
        printf("\n In higer case %c is %c",Alphabet,Alphabet+32);
    }
    else if (Alphabet>=65&&Alphabet<=90)
    {
        printf("Alphabet is in HIGER CASE");
        printf("\n In lower Case %c is %c",Alphabet,Alphabet+32);
    }
    else
    printf("Not a Valid Alphabet");

    return 0;
}