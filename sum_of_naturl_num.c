// Write A "c" Program To Calculate The Sum Of The First Naturl Number Using While+Forloop::

#include<stdio.h>
int main()
{
    float N,i=0,sum=0;
    printf("Enter The N::");
    scanf("%f",&N);

    while(i<=N)
    {
        sum=sum+i;
        i++;
    }
        printf("Sum Of The Number Is=%f",sum);

        return 0;
}