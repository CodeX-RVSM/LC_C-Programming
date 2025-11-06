#include<stdio.h>

void test(int a)
{
    printf("%d ",a);
    if(a==10){
        return ;
    }
    test(++a);
}


int main(){

    test(1);
    return 0;
}
