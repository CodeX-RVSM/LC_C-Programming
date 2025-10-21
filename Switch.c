#include<stdio.h>
int main()
{
    //wap to take month number from user 
    int num ;
    printf("Enter the month number:");
    scanf("%d",&num);

    switch(num){
        case 1:{printf("Jan");break;}
        case 2:{printf("Feb");break;}
        case 3:{printf("Mar");break;}
        case 4:{printf("Apr");break;}
        case 5:{printf("May");break;}
        case 6:{printf("June");break;}
        case 7:{printf("July");break;}
        case 8:{printf("Aug");break;}
        case 9:{printf("Sep");break;}
        case 10:{printf("Oct");break;}
        case 11:{printf("Nov");break;}
        case 12:{printf("Dec");break;}
        default:{printf("Invalid Input");}
    }
}
