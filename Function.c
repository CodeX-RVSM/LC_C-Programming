#include<stdio.h>

void test(int a, int b){
    printf("Addition is %d \n",a+b);
}


int main()
{
    test(10,20);
    printf("Main Function \n");
    test(38,23);
    test(28,52);

    return 0;
}
