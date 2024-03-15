// Write a "c" program to determine if a year is a leapyear or not::

#include<stdio.h>
int main()
{
    int year;
    printf("Enter The Year::");
    scanf("%d",&year);

      if((year%4==0)&&((year%100!=0)||(year%400==0)))
    printf("%d is a leapyear",year);
 
    else
    
     printf("%d is not a leapyear",year);

    return 0;


}