#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the Marks :");
    scanf("%d",&marks);

    if(marks>85){
        printf("GRADE:A");
    }else if(marks>75){
        printf("GRADE:B");
    }
    else if(marks>55){
        printf("GRADE:C");
    }
    else if(marks>=35){
        printf("GRADE:D");
    }else{
        printf("FAIL");
    }
}