// Write a "c" program to calculate a students result bassed on two examinations,one sports event and and three activies conducted the weightage of activities=30%,sports=20% and examintions=50%::

#include<stdio.h>
#define Activity_weightage 30
#define Exam_Weightage 50
#define Sports_Weightage 20
#define Exam_total 200
#define Activity_total 60
#define Sports_total 50
int main()

{
    int activity_1,activity_2,activity_3,exam_1,exam_2,sports_exam,total_marks;
    float activity_total,exam_total,total_percent,exam_percent,sports_percent,activity_percent;

    printf("Enter The Obtained Number of Activity 1 out 20::");
    scanf("%d",&activity_1);

    printf("Enter The Obtained Number of Activity 2 out 20::");
    scanf("%d",&activity_2);

    printf("Enter The Obtained Number of Activity 3 out 20::");
    scanf("%d",&activity_3);

    printf("Enter The Obtained Number of Exam 1 out 100::");
    scanf("%d",&exam_1);

    printf("Enter The Obtained Number of Exam 2 out 100::");
    scanf("%d",&exam_2);

    printf("Enter The Obtained Number of Sports Exam out of 50::");
    scanf("%d",&sports_exam);

    exam_total=exam_1+exam_2;
    activity_total=activity_1+activity_2+activity_3;

    exam_percent=(float)exam_total*Exam_Weightage/Exam_total;
    sports_percent=(float)sports_exam*Sports_Weightage/Sports_total;
    activity_percent=(float)activity_total*Activity_weightage/activity_percent;
    total_percent=(exam_percent*sports_percent*activity_percent);

    printf("\n**********************RESULT**********************");
    printf("\n Total Percentage in Exam:::%f",exam_percent);
    printf("\n Total Percentage in Sports::%f",sports_percent);
    printf("\n Total Percentage in Activity::%f",activity_percent);
    printf("\n---------------------------------------------------");
    printf("\n Total Percentage::::%f",total_percent);
    
    return 0;

    }

