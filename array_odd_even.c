// Write a "c" Program  taking Number from user in Array and store Even Number and ODD Number in Different Array

#include<stdio.h>
int main()
{
    int i,n;

    //Get the numbers of elemennts from user
    printf("Enter The Size of Array::");
    scanf("%d,&n");

    // Declare two Array of Size n
    int evenNumber[n];
    int oddNumber[n];

    //Initialize  indices for even and odd array
    int evenindex=0;
    int oddindex=0;

    //Get the number from the user and store them in the array

    int num;
    printf("\n Enter The Numbers :\n",n);
    for(i=0;i<n;i++){
        printf("Enter The Number %d = ",i+1);
        scanf("%d",&num);

    

    // Check if the numbers is Even or Odd
    if(num % 2==0){
        evenNumber[evenindex] = num;
        evenindex++;
    }else {
        oddNumber[oddindex] = num;
        oddindex++;
    }

}

    //Display even numbers
     printf("\n even numbers = ");
    for(i=0;i<evenindex;++i){
        printf("%d",evenNumber[i]);
    }

    // Display Odd numbers
    printf("\n Odd numbers = ");
    for(i=0;i<oddindex;++i){
        printf("%d",oddNumber[i]);
    }

    return 0;
}