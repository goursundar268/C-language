// Write A "C" Program To Print A Largest Of 3 Number Using Tenary Operator::

#include<stdio.h>
int main()
{
    int number1,number2,number3,large;
    printf("Enter The Number1::");
    scanf("%d",&number1);

    printf("Enter The Number2::");
    scanf("%d",&number2);

    printf("Enter The Number3::");
    scanf("%d",&number3);

    large=number1>number2?(number1>number3?number1:number3):(number2>number3?number2:number3);

    printf("large numberr is=%d",large);

    return 0;
}
