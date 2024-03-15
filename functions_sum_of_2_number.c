// write a "c" program to  sum of funcations of two number. 

#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b; 
    return sum;
}
int main(){
int num1,num2,num3;

printf("Enter the number1::");
scanf("%d",&num1);
 printf("Enter The Number2::");
 scanf("%d",&num2);

 num3=sum(num1,num2);
printf("sum=%d",num3);
 return 0;
}