//The report card
#include<stdio.h>
main()
{
    printf("Enter the marks in three subjects:\n");
    int sub1,sub2,sub3;
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    int score;
    score = (sub1+sub2+sub3)/3;
    printf("Grade scored by the student:\n");
    if(score>90 && score<=100)
        printf("A");
    else if(score>80 && score<=90)
        printf("B");
    else if(score>70 && score<=80)
        printf("C");
    else if(score>60 && score<=70)
        printf("D");
    else if(score>50 && score<=60)
        printf("F");
    else
        printf("incorrect input");
}
