// Write A "C" Program To Dispaly The Examination Result::
// As Below Mentioned.
// 1. >=75,print Distinction
// 2.>=65 but <75, print First Division
// 3.>=50 but <60, print Second Division
// 4.>=40 but <50,print Third Division 
// 5.<40, print Fall

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter THe Marks::");
    scanf("%d",&marks);

    if(marks>75)
    printf("Distinction");

    else if(marks>=60&&marks<75)
    printf("First Division");

    else if(marks>50&&marks<60)
    printf("Second Division");

    else if (marks>40&&marks<50)
    printf("Third Division");

    else 
    printf("FALL");

    return 0;
}