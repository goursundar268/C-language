// Write a "c" pprogram to find largest of two numbers::

#include<stdio.h>
int main()
{
    int number1,number2,large;
    printf("Enter The Number1::");
    scanf("%d",&number1);

    printf("Enter The number2::");
    scanf("%d",&number2);
    
    if(number1>number2)
    large=number1;

    else
    large=number2;

    printf("\n ;large=%d",large);

    return 0;
}