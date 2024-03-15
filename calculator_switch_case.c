// Write A "c" Program To Prepare A CALCULATOR Using Switch Case::

#include<stdio.h>
int main()
{
    char operators;
    double number1,number2,Result;

    printf("Enter The Operators::(+,-,*,/)::");
    scanf("%c",&operators);

    printf("Enter The number1::");
    scanf("%lf",&number1);

    printf("Enter The Number2::");
    scanf("%lf",&number2);

    switch (operators)
    {
    case '+':
    Result=number1+number2;
    printf("Result=%lf",Result);
        break;
        
    case'-':
    Result=number1-number2;
    printf("Result=%lf",Result);
        break;

    case'*':    
    Result=number1*number2;
    printf("Result=%lf",Result);
        break;

    case'/':
    Result==number1/number2;
    printf("Result=%lf",Result);
        break;    

    default:
    printf("INVALID OPERATORS");
        break;
    }

return 0;
 
}