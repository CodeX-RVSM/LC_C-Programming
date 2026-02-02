#include<stdio.h>

int main()
{
    int num1,num2,choice;

    printf("Enter the first Number : ");
    scanf("%d",&num1);

    printf("Enter the second Number :");
    scanf("%d",&num2);

    printf("\n1.Addition\n 2.Substraction\n 3.Division\n 4.Multiplication\n 5.Reminder\n6.Exit\n");
    printf("Enter Your Choice :");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1: printf("Addition : %d",num1+num2);break;
        case 2: printf("Substraction : %d",num1-num2);break;
        case 3: if(num2==0){
            printf("enter valid second number ......\n");}
            else{
                printf("Division : %d",num1/num2);
            }break;
            
        case 4: printf("multiplication : %d",num1*num2);break;
        case 5: printf("reminder : %d",num1%num2);break;
        case 6: printf("Exit");break;
        default : printf("Enter valid Choice");
    }

    
}