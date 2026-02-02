#include<stdio.h>
int main(){
    int num= 456;
    while (num!=0)
    {  
        int digit= num%10;
        printf("%d\n",digit);
        num=num/10;
        
    }
    

    return 0;
}