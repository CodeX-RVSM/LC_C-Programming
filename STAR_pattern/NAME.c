#include <stdio.h>

int main() {
    printf("NAME PRINTER\n");

    // 1 J
    for (int i =1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i==1||(i==7)&&(j<=((7/2)+1))||j==((7/2)+1)||(j==1)&&(i>=5)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // 2 A
    for (int i =1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(j==1||(j==7)||i==1||i==((7/2)+1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // 3 Y
    for (int i =1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if((j==1) && (i<=(7/2)+1) || (i==(7/2)+1) || j== 7|| i==7 ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    // 4 E
        for (int i =1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(j==1 || (i==(7/2)+1) || i == 1|| i==7){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");printf("\n");

    // 5 S
    for (int i =1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(((j==1) && (i<=(7/2)+1)) || (i==(7/2)+1) || i == 1 || i==7 || ((j==7) && (i>=(7/2)+1)) ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");printf("\n");

    // 6  H
    for (int i =1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(j==1|| (i==(7/2)+1) || j==7 ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}
