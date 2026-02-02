#include<stdio.h>
int main()
{
    
     //12345
    //1*****
    //2****
    //3***
    //4**
    //5*

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}