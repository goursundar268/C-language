// Write A "c" Progam To Prepare All The Geometric Area Calculator Using Switch Case::

#include<stdio.h>
int main()
{
    int choice;
    double area,side,redius,length,width,base,height;

    printf("1.Square");
    printf("2.Circle");
    printf("3.Retangle");
    printf("4.Triangle");

    printf("Enter The Number::(1,2,3,4)::");
    scanf("%d",&choice);

    switch (choice)

    {
    case 1:
    printf("Enter Your Side Of Square::");
    scanf("%lf",&side);
    area=side*side;
    printf("area=%lf",area);
        break;
    case 2:
    printf("Enter The Height And Base Of Triangle::");
    scanf("%lf",&height);
    area=0.5*base*height;
    printf("area=%lf",area);
        break;
        case 3:
    printf("Enter The Redius Of Circle::");
    scanf("%lf",&redius);
    area=3.14*redius*redius;
    printf("area=%lf",area);
        break;
        case 4:
    printf("Enter The Lenght And Width::");
    scanf("%lf %lf",&length,&width);
    area=length*width;
    printf("area=%lf",area);
        break;

    default:
        printf("Enter The Correct Shape");
        break;
    }
        return 0;

    }