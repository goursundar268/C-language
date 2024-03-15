// A Company Decides To Give Bonus To All Amployee On Durga Puja 5% Bonus On Salary Is Given To The Male Workers and 10% Bonus On Salary To The Female Workes.
// Write A "c" Program To Enter Of The Emplyee Is Less Then RS.10,000 Then The Employed Gets An extra 2% bonus Salary Calcute the Bonus That Has To The Employee And Display The Salary That The Employee Will Get::

#include<stdio.h>
int main()
{
    char cx;
    float salary,bonus,amount_to_be_paid;

    printf("Enter The Gander Of The Employee(m/f)::");
    scanf("%c",&cx);

    printf("Enter The Salary Of The Employee::");
    scanf("%f",&salary);

    if(cx=='m')
    {
        bonus=salary*0.05;
    }
    else
    {
        bonus=salary*0.10;
    }
    if(salary<10000)
    {
        bonus+=salary*0.02;
    }
    amount_to_be_paid=salary+bonus;

    printf("\n Salary:--%f",salary);
    printf("\n Bonus::--%f",bonus);
    printf("\n ******************");
    printf("\n Amount To Be Paid::--%f",amount_to_be_paid);

    return 0;
    
}