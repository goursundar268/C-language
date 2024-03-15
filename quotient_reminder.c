// Write a "c" program to print Quotient and Reminder given by the user::

#include<stdio.h>
int main()
{
    int number1,number2,quotient,reminder;
    printf("Enter The Number1::");
    scanf("%d",&number1);

    printf("Enter The Number2::");
    scanf("%d",&number2);

    quotient=number1/number2;
    reminder=number1%number2;

    printf("quotient=%d",quotient);
    printf("reminder=%d",reminder);

    return 0;
}