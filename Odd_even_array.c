#include<stdio.h>
int main(){
    int i,n,num;

    printf("Enter the size of Array:: ");
    scanf("%d",&n);

    int evenarray[n];
    int oddarray[n];

    int even=0;
    int odd=0;

    for(i=0;i<n;i++)
    {
        printf("Enter the Elements of Array:: ");
        scanf("%d",&num);

        if(num%2==0)
        {
            evenarray[even]=num;
            even++;
        }
        else
        {
            oddarray[odd]=num;
            odd++;
        }
    }

    printf("Elements of The Even Array is:: ");
    for(i=0;i<even;i++)
    {
        printf("%d\t",evenarray[i]);
    }
    
    printf("\n Elements of The Odd Array is:: ");
    for(i=0;i<odd;i++)
    {
        printf("%d\t",oddarray[i]);
    }

    return 0;
}