// Write a "c" program to find the Area of a circle and circumference of circle::

#include<stdio.h>
int main()
{
    float redius;
    double area,circumference;

    printf("Enter The Redius of Circle::");
    scanf("%f",&redius);

    area=3.14*redius*redius;
    circumference=2*3.14*redius;

    printf("area==%lf",area);
    printf("circumference=%lf",circumference);

    return 0;
    
}