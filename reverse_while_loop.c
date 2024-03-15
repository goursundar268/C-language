// write a "c" program to reverse number using while loop.

#include<stdio.h>
int main()
{
    int number,reminder,reverse=0;

    printf("Write your nuumber");
    scanf("%d",&number);

    while (number!=0)
    {
        reminder=number%10;
        reverse=reverse*10+reminder;
        number=number/10;
    }
    printf("Reverse of the number is %d",reverse);
    return 0;

}