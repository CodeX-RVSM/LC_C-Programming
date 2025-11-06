#include<stdio.h>

int test(int c){
    c+=2;
    int d=2;
    printf("%d\n",++c);
    d+=c;
    return c+d;
}
int main (){
    int a=10;
    int b=test(++a);
    printf("%d\n",test(++b));
    int e=test(a+b);
    printf("%d\n",test(++e));
    printf("%d\n",a+b+e);


    return 0;
}
