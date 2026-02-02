#include<stdio.h>
int main(){
    int num ,sum = 0;
    printf("Enter a Number :");
    scanf("%d",&num);
    while (num!=0)
    {
        int digit= num%10;

        if(digit%2==0)
        sum= sum+digit;
        num= num/10;
    }

    printf("The addition of even number is :%d",sum);
    
}