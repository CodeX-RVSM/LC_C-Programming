#include<stdio.h>
int main()
//write a program to perform basic mathematical operations using switch :
//Inputs : num1,num2,operator(+-*/%)
//use switch on the operation as well as if else (num2!=0)
{   
    int num1,num2,result;
    char choice;

    printf("Enter the First Number: ");
    scanf("%d",&num1);

    printf("Enter the second Number :");
    scanf("%d",&num2);

    printf("a.+\nb.-\nc.*\nd./\ne.%%\nf.exit\n");
    printf("Enter your choice :");
    scanf(" %c",&choice);

    switch(choice)
    {
        case 'a': result = num1+num2;
                printf("result is :%d",result);
                break;
    
        case 'b': result = num1-num2;
                printf("result is :%d",result);
                break;

        case 'c': result = num1* num2;
                printf("result is :%d",result);
                break;
        
        case 'd': result = num1 /num2;
                if(num2 != 0)
                {
                    printf("result is : %d",result);
                }else{
                    printf("Division by zero is not allowed ....!");
                }break;

        case 'e': result = num1 % num2;
                if(num2 !=0)
                {
                    printf("result is :%d",result);
                }else{
                    printf("Modulo by zero is not allowed....!");                    
                }break;
        case 'f':printf("Exiting the program.......!!!!!");break;
        
        default : printf("Enter a valid choice :");
    }

    return 0;

}