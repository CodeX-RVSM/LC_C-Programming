#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num>=0){
        if(num %2 ==0){
            printf("Even Number...");
        }
        else{
            printf("Odd Number...");
        }
    }else{
        printf("its a Negative number ");
    }
}