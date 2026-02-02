#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n!=0)
    {  
        int digit=n%10;
        if(digit%2==0)
        {
            printf(" Even Digits are :%d\n",digit);
            n=n/10;
        }
        
    }
    return 0;
}