// Write a "c" program to calculate the simple interest based on principal amount,rate,and time::

#include<stdio.h>
int main()
{
    float principal,time,rate,simple_interest;
    printf("Enter principle amount::");
    scanf("%f",&principal);

    printf("Enter time(years)::");
    scanf("%f",&time);

    printf("Enter interest::");
    scanf("%f",&rate);

    simple_interest=(principal*time*rate)/100;
    printf("\n simple interest=%3.0f",simple_interest);

    return 0;
}