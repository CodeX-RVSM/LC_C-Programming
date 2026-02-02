#include<stdio.h>
int main()
{
    int n=10,a=1;
    int first=0,second=1,third;

    //fibonacci series n=10
    //0 1 1 2 3 5 8 13 21 34
    //F S T

    while(a<=n){
        printf("%d",first);//0 1 1 2 3
        third=first+second;//1
        first=second;//1
        second=third;//2

        a++;
    }

    
}