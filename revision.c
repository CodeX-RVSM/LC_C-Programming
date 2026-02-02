// 1.factor()
// 2.factorial(int)
// 3.prime()
// 4.reverse(int)
// 5.power(int,int)//base ,power

#include<stdio.h>

void factor(){
    int a=1,n;
    printf("Enter a number to find factor :\n");
    scanf("%d",&n);

    while (a<=n)
    {
        if(n%a==0){
            printf("%d\n",a);
        }
        a++;
        /* code */
    }
}

void factorial(int n, int a, int fact){
    // a=1;
    // fact=1;
    printf("Enter a number to find factorial :\n");
    scanf("%d",&n);

    while (a<=n)
    {
        fact=fact*a;
        a++;
    }
    printf("Factorial is %d",fact);

    
}

int main()
{
    factor();
    factorial(4,1,1);

    return 0;
}