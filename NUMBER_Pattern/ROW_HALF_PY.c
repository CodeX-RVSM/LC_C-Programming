#include <stdio.h>

int main() {
    printf("ROW HALF PYRAMID\n");

    int num =1,diffrence;
    for(int i =1;i<=5;i++){
        num = i,diffrence=4;
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num+=diffrence;
            diffrence--;
        }
        printf("\n");
    }


    return 0;
}