// Write a "c" to print on two Intager number::

#include<stdio.h>
int main()
{
    int Number1,Number2;
    int add,sub,mul,idiv,mode;
    float fdiv;

    printf("\n Enter The Number1::");
    scanf("%d",&Number1);

    printf("\n Enter The Number2::");
    scanf("%d",&Number2);

    add=Number1+Number2;
    sub=Number1-Number2;
    mul=Number1*Number2;
    idiv=Number1/Number2;
    mode=Number1%Number2;
    fdiv=Number1/Number2;

    printf("\n %d+%d=%d",Number1,Number2,add);
    printf("\n %d-%d=%d",Number1,Number2,sub);
    printf("\n %d*%d=%d",Number1,Number2,mul);
    printf("\n %d/%d=%d",Number1,Number2,idiv);
    printf("\n %dmode%d=%d",Number1,Number2,mode);
    printf("\n %d/%d=%d",Number1,Number2,fdiv);

    return 0;

}