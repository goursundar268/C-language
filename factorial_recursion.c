// Write a "c" program to calculate the factorial of a number using recursion.

#include<stdio.h>
int calculate_factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*calculate_factorial(n-1);
    }
}   
int main(){
    int num;
    printf("Enter The Number::");
    scanf("%d",&num);

    if(num<0){
        printf("factorial of is not defined for negitive numbers..\n");
    }
    else{
        int factorial=calculate_factorial(num);
        printf("factorial of %d is %d.\n",num,factorial);
    }
    return 0;
    
}