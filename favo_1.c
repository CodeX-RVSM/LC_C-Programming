#include<stdio.h>

void fibo(int first , int second, int n){
    printf("%d ",first);
    int third=first+second;
    if(n==1){
        return;
    }
    fibo(second,third,--n);

}

int main(){
    fibo(0,1,10);
    return 0;
}