#include<stdio.h>
int main(){
    int num;
    printf("enter month number: ");
    scanf("%d",&num);

    switch(num) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:printf("31 days");break;
        case 4: case 6: case 9: case 11:printf("30 days");break;
        case 2:printf("28 or 29 days");break;
        default:printf("invalid month number");
     }
    
}