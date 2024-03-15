// Write a "c" program to swep two numbers with temporary variable::

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The a::");
    scanf("%d",&a);

    printf("Enter The b::");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("a=%d,b=%d",a,b);

    return 0;
}