// Write a "c" program to convert temperature  from celsius to fahrenheit::

#include<stdio.h>
int main()
{
    float  celsius,fahrenheit;
    printf("Enter The Temperature in Celsius::");
    scanf("%f",&celsius);

    fahrenheit=(celsius*1.8)+32;
    printf("%f celsius is %f in fahrenheit",celsius,fahrenheit);

    return 0;
}