// Write a "c" program to list all leap year from 1900 to 2100 do while loop.
#include <stdio.h>
int main()
{
    int m=1900,n=2100,i;
    do
    {
    if(m %4==0)
        printf("%d is a leap year \n",m);
    
    else
    
        printf("%d is a not leap year \n",m);
        
        m++;}
        while(m<=n);
return 0;

}