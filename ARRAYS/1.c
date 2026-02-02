#include <stdio.h>

int main() {
    printf("WELCOME TO TIC TAC TOE GAME \n");

    char board[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

    char player = 'X';
    int a, b;
    int moves = 0;
    int game_over = 0;

    while (!game_over && moves < 9) {
        // Print board
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("| %c ", board[i][j]);
            }
            printf("|\n");
        }

        printf("\nPLAYER %c IS PLAYING\n", player);
        printf("Enter row (1-3): ");
        scanf("%d", &a);
        printf("Enter column (1-3): ");
        scanf("%d", &b);

        if (a < 1 || a > 3 || b < 1 || b > 3) {
            printf("Invalid position! Try again.\n");
            continue;
        }

        if (board[a-1][b-1] != ' ') {
            printf("That block is already occupied! Try again.\n");
            continue;
        }

        board[a-1][b-1] = player;
        moves++;

        // Check win (rows, cols, diagonals)
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
                (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
                game_over = 1;
            }
        }

        if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
            (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
            game_over = 1;
        }

        if (game_over) {
            printf("\nPLAYER %c WINS!\n", player);
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    if (!game_over)
        printf("\nIt's a draw!\n");

    return 0;
}
