// Write a "c" program to print summation of decimal number given by the user::

#include<stdio.h>
int main()
{
    float number1,number2,sum;
    printf("Enter The Number::");
    scanf("%f",&number1);

    printf("Enter The Number2::");
    scanf("%f",&number2);

    sum=number1+number2;
    printf("%f+%f=%f",number1,number2,sum);

    return 0;
}