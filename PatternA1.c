#include<stdio.h>
int main()
{
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=5;j++){
    //         printf("d",j);//1111122222333334444455555
    //     }
    // }


    //12345
    //2****
    //3****
    //4****
                // for(int i=1;i<=4;i++){
                //     for(int j=1;j<=5;j++){
                //         printf("*");
                //     }
                // printf("\n");
                // }
                // 
    
     //12345
    //1*
    //2**
    //3***
    //4****

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}
