#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n!=0)
    {  
        int digit= n%10;
        printf("%d\n",digit);
        n=n/10;
    }
    

    return 0;
}