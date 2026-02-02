#include<stdio.h>

int main()
{
    int num1,num2,add,sub,mul;
    float div;

    printf("Enter the Two Numbers :");
    scanf("%d%d",&num1,&num2);

    add = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div =(num1/(float)num2);

    printf("\nAddition of Two Numbers is : %d",add);
    printf("\nSubstraction of Two Numbers is : %d",sub);
    printf("\nMultiplication of Two Numbers is : %d",mul);
    printf("\nDivision of Two Numbers is : %f",div);

}