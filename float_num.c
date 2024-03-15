// Write a "c" program to perfor two float numbers::

#include<stdio.h>
int main()
{
    float Number1,Number2;
    float add,sub,mul,idiv;

    printf("\n Enter The Number1::");
    scanf("%f",&Number1);

    printf("\n Enter The Number2::");
    scanf("%f",&Number2);

    add=Number1+Number2;
    sub=Number1-Number2;
    mul=Number1*Number2;
    idiv=Number1/Number2;

    printf("\n %f+%f=%f",Number1,Number2,add);
    printf("\n %f-%f=%f",Number1,Number2,sub);
    printf("\n %f*%f=%f",Number1,Number2,mul);
    printf("\n %f/%f=%f",Number1,Number2,idiv);

    return 0;

}
