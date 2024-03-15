// Write a "c" program to calcute the bill amount for an iten given its quantity sold,value,discount and tax::

#include<stdio.h>
int main()
{
    float total_amt,amt,sub_total,discount_amt,tax_amt,qty,val,discount,tax;

    printf("\n Enter The quantity of item sold::");
    scanf("%f",&qty);

    printf("\n Enter The Value of item::");
    scanf("%f",&val);

    printf("\n Enter The Discount Percentege::");
    scanf("%f",&discount);

    printf("\n Enter The The Tax::");
    scanf("%f",&tax);

    amt=qty*val;
    discount_amt=(amt*discount)/100.00;
    sub_total=amt-discount_amt;
    tax_amt=(sub_total*tax)/100.00;
    total_amt=sub_total+tax_amt;


    printf("\n***************BILL**************");
    printf("\n quantity sold:%f",qty);
    printf("\n value of this items:%f",val);
    printf("\n---------------------------------");
    printf("\n amount:%f",amt);
    printf("\n Discount:%f",discount_amt);
    printf("\n-------------------------------");
    printf("\n discount total:%f",sub_total);
    printf("\n tax:%f",tax_amt);
    printf("\n-------------------------------");
    printf("\n total Amount:%f",total_amt);

    return 0;
}