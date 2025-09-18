#include<stdio.h>
int main()
{
    int value;
    printf("Enter the Number :");
    scanf("%d",&value);

    if(value%5 ==0){
        printf("hi");
    }else if(value%3 ==0){
        printf("hello");
    }
    else if(value%3 == 0 && value%5 == 0){
        printf("bye");
    }
    else{
        printf("Good Bye");
    }
}
