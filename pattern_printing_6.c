#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            printf(i%2!=0?"1":"0");
        }
        printf("\n");
    }


}

// 11111
// 0000
// 111
// 00
// 1
