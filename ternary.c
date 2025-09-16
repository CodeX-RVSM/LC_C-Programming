#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the First Number :");
    scanf("%d", &num1);

    printf("Enter the Second Number :");
    scanf("%d", &num2);

    int max=num1>num2?num1:num2;
    printf("Maximum Number is : %d ",max);
}
