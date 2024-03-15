// Write A "c" Program To A Calculate Tax,Given The Following Conditions::
// -if income is less then 150000 ther no tax;
// -if taxable income is in the range 150001 > 300000 then charge 10% tax;
// -if taxable income is in the range 300001 > 500000 then charge 20% tax;
// -if taxable income is above 500001 then charge 30% tax;
#include <stdio.h>
int main()
{
    double income, tax, taxable_income;
    printf("Write The Income::");
    scanf("%lf", &income);
    taxable_income = income - 150000;
    if (taxable_income < 150000)
    {
        tax = 0;
        printf("Tax Value Is %lf", tax);
    }
    else if (taxable_income >= 150001 && taxable_income < 30000)
    {
        tax = taxable_income * 0.1;
        printf("Tax Value Is %lf", tax);
    }
    else if (taxable_income >= 300001 && taxable_income < 50000)
    {
        tax = taxable_income * 0.2;
        printf("Tax Value Is %lf", tax);
    }
    else
    {
        tax = taxable_income * 0.3;
        printf("Tax Value Is %lf", tax);
    }
    return 0;
}