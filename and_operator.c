// Write a "c" program to find the greatest of three using && operator::

#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("Enter The Number1::");
    scanf("%d",&number1);

    printf("Enter The Number2::");
    scanf("%d",&number2);

    printf("Enter The Number3::");
    scanf("%d",&number3);

    if(number1>number2&&number1>number3)
    printf("%d is bigger then %d and %d",number1,number2,number3);
    
    else if(number2>number1&&number2>number3)
    printf("%d is bigger then %d and %d",number2,number1,number3);
    
    else
    printf("%d is bigger then %d%d",number3,number1,number2);
    
    return 0;
}