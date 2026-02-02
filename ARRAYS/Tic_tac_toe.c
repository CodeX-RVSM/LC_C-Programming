#include <stdio.h>

int main() {
    printf("WELCOME TO TIC TAC TOE GAME \n");

    int a=0,b=0,z=3,flag = 1,moves=0;
    char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char player = 'X';
    while(flag){
        a=0,b=0;
        for(int l=0;l<z;l++){
            for(int m=0;m<z;m++){
            printf("| %c ",board[l][m]);
            }
            printf("|");
            printf("\n");
        }

        printf("PLAYER %c IS PLAYING \n",player);

            printf("Please enter the row postion of %c:",player);
            scanf("%d",&a);
            printf("Please enter the column postion of %c:",player);
            scanf("%d",&b);
        if(a<1||a>3||b<1||b>3){
            printf("\nPlease enter valid input \n");
            continue;
        }
        else{
            if(board[a-1][b-1]=='X'||board[a-1][b-1]=='O'){
                printf("\n The block is already occupied \n");
                continue;
            }
            board[a-1][b-1] = player;
            moves++;
        }
        for(int i = 0;i<z;i++){
            if(board[i][0]==player && board[i][1]==player && board[i][2]==player ||
              board[0][i]==player && board[1][i]==player && board[2][i]==player){
                printf("Congrats %c wins....\n",player);
                for(int l=0;l<z;l++){
                for(int m=0;m<z;m++){
                printf("| %c ",board[l][m]);
                }
                printf("|");
                printf("\n");
                }
                flag = 0;
                break;
              }
            else if(board[0][0] == player && board [1][1] == player && board[2][2] == player 
                || board[0][2] == player &&  board[1][1]==player && board[2][0]){
                    printf("Congrats %c wins.... \n",player);
                    for(int l=0;l<z;l++){
                    for(int m=0;m<z;m++){
                    printf("| %c ",board[l][m]);
                    }
                    printf("|");
                    printf("\n");
                    }
                    flag = 0;
                    break;
                }
        }
        if(moves == 9){
            printf("\n ITS DRAW \n");
            for(int l=0;l<z;l++){
            for(int m=0;m<z;m++){
            printf("| %c ",board[l][m]);
            }
            printf("|");
            printf("\n");
        }
            break;
        }
        player = player=='X'?'O':'X';

    }      
    return 0;
}

