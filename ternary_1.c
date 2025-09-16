#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter the First Number :");
    scanf("%d",&num1);

    printf("Enter the Second Number :");
    scanf("%d",&num2);

    printf("Enter the Third Number :");
    scanf("%d",&num3);

    int max;
    max = num1>num2?num1:num2;
    max = max>num3?max:num3;
    
    
    
    printf("Maximum Number is : %d ",max);


}
