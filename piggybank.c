// Write a "c" program to  calculate the total amount of money in piggybank,given the conis of RS.10,RS.5,RS.2,RS.1::

#include<stdio.h>
int main()
{
    int num_of_10_conis,num_of_5_conis,num_of_2_conis,num_of_1_conis;
    float total_amt=0.0;

    printf("\n Enter The number of RS.10 conis in the piggybank::");
    scanf("%d",&num_of_10_conis);

    printf("\n Enter The number of RS.5 conis in the piggybank::");
    scanf("%d",&num_of_5_conis);

    printf("\n Enter The number of RS.2 conis in the piggybank::");
    scanf("%d",&num_of_2_conis);

    printf("\n Enter the number of RS.1 conis in the piggybank::");
    scanf("%d",&num_of_1_conis);

    total_amt=num_of_10_conis*10+num_of_5_conis*5+num_of_2_conis*2+num_of_1_conis*1;
    printf("\n total amount in the piggybank=%f",total_amt);

    return 0;
}