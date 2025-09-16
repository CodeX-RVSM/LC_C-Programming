#include<stdio.h>
int main()
{
    //WAP to print max between 2 num using if else
    int num1,num2;

    printf("Enter First number :");
    scanf("%d",&num1);

    printf("Enter the Second Number :");
    scanf("%d",&num2);

    if (num1>num2)
    {
        printf("Maximum Number is : ");
    }
    else{
        printf("Maximum Number is : %d",&num2);     
    }

    
}
