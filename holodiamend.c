#include<stdio.h>
int main()
{
    for(int i=1;i<=6;i++){
        for(int j=5;j>=i;j--){
            printf(" ");
        }

        //for star
        for(int j=1;j<=i*2-1;j++){
            if(j==1||j==i*2-1)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }

    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            printf(" ");
        }

        //for star
        for(int j=1;j<=i*2-1;j++){
            if(j==1||j==i*2-1)
            printf("*");
            else 
            printf(" ");
            
        }
        printf("\n");
    }




    return 0;
}