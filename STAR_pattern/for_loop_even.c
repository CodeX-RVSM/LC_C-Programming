#include <stdio.h>

int main() {
    int num,i,j=0;
    printf("EVEN NUMBER PRINTER IN FOR LOOP \n");
    printf("Please enter a number:");
    scanf("%d",&num);
    printf("\n");

    for(int i=0; i<=num;i=i+2){
        j = j + i;
        printf("%d \n",i);
    }
    printf("%d \n",j);


    return 0;
}