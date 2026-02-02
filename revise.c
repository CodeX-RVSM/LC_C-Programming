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

void factorial(int){
    
}

int main()
{
    factor();

    return 0;
}