// Write a "c" program to find whether the given number is odd or even ::

#include<stdio.h>
int main()
{
    int number;
    printf("Enter The Any number::");
    scanf("%d",&number);

    {
        if(number%2==0)

    printf("\n %d is  an Even Number",number);
    
        else
    
    printf("\n %d is an Odd Number",number);
    }
    return 0;
}