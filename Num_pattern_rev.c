#include<stdio.h>
int main(){

// 11111
// 11111
// 11111
// 11111
// 11111

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

// 12345
// 12345
// 12345
// 12345
// 12345

//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }


// 12345
// 12345
// 12345
// 12345
// 12345
    // for(int i=1;i<=5;i++){
    //     for(int j=0;j<=4;j++){
    //         printf("%d",j+1);
    //     }
    //     printf("\n");
    // }


// 11111
// 22222
// 33333
// 44444
// 55555
    // for(int i=0;i<=4;i++){
    //     for(int j=0;j<=4;j++){
    //         printf("%d",i+1);
    //     }
    //     printf("\n");
    // }


// 1
// 11
// 111
// 1111
// 11111
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("1");
    //     }
    //     printf("\n");
    // }


// 11111
// 00000
// 11111
// 00000
// 11111
    // for(int i=0;i<=4;i++){
    //     for(int j=0;j<=4;j++){
    //         if(i%2 ==0){
    //         printf("1");
    //         }else{
    //             printf("0");
    //         }
    //     }
    //     printf("\n");
    // }

// 00000
// 1111
// 000
// 11
// 0

    // for(int i=1;i<=5;i++){
    //     for(int j=5;j>=i;j--){
    //         if(i%2 ==0){
    //         printf("1");
    //         }else{
    //             printf("0");
    //         }

    //     }
    //     printf("\n");
    // }

// 01010
// 01010
// 01010
// 01010
// 01010
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j%2 ==0){
//             printf("1");
//             }else{
//                 printf("0");
//             }

//         }
//         printf("\n");


// 12345
// 2345
// 345
// 45
// 5
    // for(int i=1;i<=5;i++){
    //     for(int j=i;j<=5;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }


// 01010
// 1010
// 010
// 10
// 0

    // for(int i=1;i<=5;i++){
    //     for(int j=i;j<=5;j++){
    //         if(j%2 ==0){
    //         printf("1");
    //         }else{
    //             printf("0");
    //         }

    //     }
    //     printf("\n");
    // }


// 10101
// 01010
// 10101
// 01010
// 10101
     for(int i=1;i<=5;i++){
        
        for(int j=1;j<=5;j++){
            if(i%2==0){
            if(j%2 ==0){
            printf("1");
            }else{
                printf("0");
            }
        }else{
            if(j%2 ==0){
            printf("0");
            }else{
                printf("1");
            }

        }
        }
        printf("\n");
    }
    
    return 0;
}