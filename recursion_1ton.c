#include<stdio.h>

int test(int a, int n){
    printf("%d\n",a);
    if(a==n){
        return;
    }
    test(++a,n);
}

int main(){

    int a=1,n;
    printf("Enter one Number \n ");
    scanf("%d",&n);
    test(a,n);

    return 0;
}
