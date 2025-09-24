#include<stdio.h>
int main()
//Neon NUmber 
//9 - square - 81- --->8+1--->9 Its a neon Number 9=9
//6 - square - 36- --->3+6--->9 Not a neon Number 6!=9

{
    int n ,squ;
    int sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);

    squ=n*n;
    while (squ!=0)
    {
        int digit= squ%10;
        sum= sum+digit;
        
        
        squ= squ/10;
        

    }
    if(sum==n)
        {
            printf("Its a neon num");
        }else{
            printf("Its not a neon num");
        }

    

    return 0;
}
