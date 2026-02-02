#include <stdio.h>

int main() {
    printf(" HALF ALPHABET PYRAMID \n");
    int num=6;
    char ch='A';
    for(int i = 0;i <= num;i++){
        for(int j=1; j<= i;j++){
            printf("%c",ch++);
        }
        printf("\n");
    }

    return 0;
}