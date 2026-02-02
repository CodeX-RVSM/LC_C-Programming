#include <stdio.h>
// PATTERN 15
int main() {
    printf("LETTER DIAMOND \n ");

    int num;
    char A='a';
    printf("Please enter a number:");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++){
        for (int j=num-1;j>=i;j--){
            printf("  ");
        }
        char A='A';
        for(int k=1;k<=(i*2)-1;k++){
            if(i>k){
                printf("%c ",A++);
            }
            else{
                printf("%c ",A--);
            }
        }
        printf("\n");
    }

    for(int i = num-1;i>=1;i--){
        for (int j=num-1;j>=i;j--){
            printf("  ");
        }
        char A='a';
        for(int k=1;k<=(i*2)-1;k++){
            if(i>k){
                printf("%c ",A++);
            }
            else{
                printf("%c ",A--);
            }
        }
        printf("\n");
    }

    return 0;
}