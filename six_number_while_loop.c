// Write A "C" Program To Print Largest Of 6 Number Using While loop::

#include<stdio.h>
int main()
{
    int number,large=0,i=0;

    while(i<=5)
    { printf("Enter The Number::");
    scanf("%d",&number);

    large=number>large?number:large;
    i++;
    }
        printf("\n Large Number Is=%d",large);

        return 0;
}