// Write a "c" program to gencrate a fibonaccii seqquence using a while loop.

#include<stdio.h>
int main()
{
    int num,first=0,second=1,next;
    printf("Enter The Number Of Terms::");
    scanf("%d",&num);

    printf("Fibonacci Series:");
    while(num>0)
    {
        printf("%d   ",first);
        next=first+second;
        first=second;
        second=next;
        num-- ;
    }
    return 0;
}