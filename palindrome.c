#include<stdio.h>

int main(){
    int num, rev=0;
    int temp=num;



    printf("Enter a Original :");
    scanf("%d",&num);
    
    while(num!=0)
    {  
        int digit= num %10;
        rev=rev*10+digit;
        num= num/10;

    }
        printf("\n reverse number is : %d",rev);
        if(temp==rev){
            printf("\n Given Number is a Palindrome Number ");
        }
        else{
            printf("\nThe number is not palindrome ");
        }    
    

    
}
