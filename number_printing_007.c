#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){
            printf(i%2!=0?(j%2==0?"1":"0"):(j%2==0?"1":"0"));
        }
        printf("\n");
    }


}

// 10101
// 0101
// 101
// 01
// 1


