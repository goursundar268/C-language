// Write a "c" program to print summation of two numbers given by the user::

#include<stdio.h>
int main()
{
    int number1,number2,sum;
    printf("Enter The Number1::");
    scanf("%d",&number1);

    printf("Enter The Number2::");
    scanf("%d",&number2);

    sum=number1+number2;
    printf("%d+%d=%d",number1,number2,sum);

    return 0;

}