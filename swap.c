#include<stdio.h>
int main()
{
    int a=13;
    int b=12;
    // Using temp
    printf("A: %d , B: %d\n",a,b);
    printf("After Swap :");
    
    // int temp=a;
    // a=b;
    // b=temp;
    // printf("A: %d, B: %d",a,b);
     
    //without temp
    a=a+b;
    b=a-b;
    a=a-b;

    printf("A : %d, B :%d\n",a,b);


    return 0;
}