// Write a "c" program to chack if a number is prime using funcation.

#include<stdio.h>
#include<stdbool.h>
bool prime(int num){

    if(num<=1){
        return false;
    }
  for(int i=2;i*i<=num;++i){
  
    if(num%i==0){
        return false;
    }
}
  return true;
  }
int main(){
int num1;
printf("Enter the prime number::");
scanf("%d",&num1);

if(prime(num1)){
    printf("%d is a prime number\n",num1);
}
else {
    printf("%d is a not prime number\n",num1);
}

return 0;
}