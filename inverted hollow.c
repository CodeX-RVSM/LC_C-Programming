#include<stdio.h>
int main()
{
    for(int i=7;i>=1;i--){
        for(int j=6;j>=i;j--){
            printf(" ");
        }

        //for star
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==7||i==1)
            printf("* ");
            else 
            printf("  ");
            
        }
        printf("\n");
    }



    for(int i=1;i<=6;i++){
        for(int j=6;j>=i;j--){
            printf(" ");
        }

        //for star
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==1||i==6)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }

    


    return 0;
}