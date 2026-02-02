#include <stdio.h>

int main() 
{
    char name[10], clgname[20];
    int sub1,sub2,sub3,sub4,sub5;
    float per;
    char grade;

    printf("Enter Your Name :");
    scanf("%s",name);

    printf("Enter Your College Name :");
    scanf("%s",clgname);

    printf("Enter marks for five subjects : ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

    int TotalMarks = sub1+sub2+sub3+sub4+sub5;

    per = TotalMarks / 5 ;

    if(per>85)
    {
        grade = 'A';
    }else if (per>75){
        grade = 'B';
    }else if (per>60){
        grade = 'C';
    }else if (per>35){
        grade = 'D';
    }else if (per<35){
        grade = 'F';
    }
    printf("----------Student Marksheet-----------\n");
    printf("\tName          : %s\n", name);
    printf("\tClg Name      : %s \n",clgname);
    printf("\tTotal Marks   : %d\n", TotalMarks);
    printf("\tPercentage    : %f\n", per);    
    printf("\tGrade         : %c \n",grade);
    printf(per>35?"\t   Result : Pass":"\t    Result : Fail \n");
    printf("\n-------------------------------------");


}