// Write A "C" Program To Print !st "N" Nauturl Number Using While Loop::

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter The N::");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;


}