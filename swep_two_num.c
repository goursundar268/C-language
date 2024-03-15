// Write a "c" program to print swap two numbers::

#include<stdio.h>
int main()
{
    int A,B;
    printf("Enter The Numbers A:");
    scanf("%d",&A);

    printf("Enter The Numbers B:");
    scanf("%d",&B);

    A=B+A;
    B=A-B;
    A=A-B;

    printf("A=%d,B=%d",A,B);
    return 0;
}