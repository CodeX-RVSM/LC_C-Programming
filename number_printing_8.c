#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=i;j<=6-1;j++){
            printf(i%2!=0?(j%2==0?"1":"0"):(j%2==0?"1":"0"));
        }
        printf("\n");
    }


}

// 0
// 01
// 010
// 0101
// 01010

