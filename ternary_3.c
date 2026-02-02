#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;

    printf("Enter the First Number :");
    scanf("%d",&num1);

    printf("Enter the Second Number :");
    scanf("%d",&num2);

    printf("Enter the Third Number :");
    scanf("%d",&num3);

    printf("Enter the Forth Number :");
    scanf("%d",&num4);

    printf("Enter the Fifth Number :");
    scanf("%d",&num5);

   /* int max;
    max = num1>num2?num1:num2;
    max = max>num3?max:num3;
    max = max>num4?max:num5;*/

    int max = num1>num2?num1:num2&&num1>num3?num1:(num2>num3?num2:num3);
    max = max>num4?max:num5;
   
    
    
    printf("Maximum Number is : %d ",max);


}