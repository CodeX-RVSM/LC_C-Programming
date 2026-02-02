#include<stdio.h>

int fact(int a, int n){
    printf("%d",a);
    if(a==n){
        return  ;
    }
    test(++a,n);
}

int main(){

    int a=1,n;
    printf("Enter one Number ");
    scanf("%d",&n);
    test(a,n);

    return 0;
}