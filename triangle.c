// Write a "c" program to print the Area of a Triangle::

#include<stdio.h>
int main()
{
    int height,lenth;
    float a=0.5;

    float mul;
    printf("\n Enter The Height::");
    scanf("%d",&height);

    printf("Enter The Lenth::");
    scanf("%d",&lenth);

    mul=a*height*lenth;
    printf("%f*%d*%d=%f",a,height,lenth);

    return 0;
}