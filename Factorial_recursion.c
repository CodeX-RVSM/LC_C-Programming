#include<stdio.h>

int fact(int n){
    if(n==1){
        return 1 ;
    }
    return n*fact(n-1);
}

int main(){

    int num=5;

    int factorial=fact(num);
    printf("Factorial of %d is %d",num,factorial);

    return 0;
}
