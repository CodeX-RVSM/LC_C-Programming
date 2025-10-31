#include<stdio.h>
void add(int num1, int num2){
    printf("Addition is : %d",num1+num2);
}
void sub(int num1,int num2){
    printf("Substraction is : %d",num1-num2);
}
void mul(int num1,int num2){
    printf("Multiplication is : %d",num1*num2);
}
void Div(float num1,float num2){
    if(num1== 0){
        printf("Cannot divide by zero");}
        else{
            float Div= num1/num2;
            printf("Division is : %f",num1/num2);
        }
    }


int main(){


    int num1,num2,choice;
    printf("Enter Frist Number : ");
    scanf("%d",&num1);
    printf("Enter A Second Number :");
    scanf("%d",&num2);

    printf("Enter Choice \n 1.Addition\n 2.Substraction \n 3.Multiplication \n 4.Division \n 5.Exit \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:add(num1,num2);break;
        case 2:sub(num1,num2);break;
        case 3:mul(num1,num2);break;
        case 4:Div(num1,num2);break;
        case 5:break;
        default:printf("Enter a Valid choice");
    }

    return 0;
}
