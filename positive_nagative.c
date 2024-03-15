// Write A "C" Program To Whether A Number Entered Is Positive Nagative Or Equal To Zero::

#include<stdio.h>
int main()
{
    int number;
    printf("Enter THe Number::");
    scanf("%d",&number);

    if(number>0)
    printf("The Number Is POSITIUVE");
    
    else if(number>0)
    printf("The Number Is NEGATIVE");

    else 
    printf("The NUmber Is Equal To Zero");

    return 0;
}