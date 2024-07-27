/*
pawn = 1
tower = 2
knight = 3
bishop = 4
queen = 5
king = 6
'0' added at the end for black pieces
*/

#include <stdio.h>

int board[8][8] = {0};
int j, k;

int main () {

    board[0][0] = 20;
    board[1][0] = 30;
    board[2][0] = 40;
    board[3][0] = 50;
    board[4][0] = 60;
    board[5][0] = 40;
    board[6][0] = 30;
    board[7][0] = 20;

    board[0][7] = 2;
    board[1][7] = 3;
    board[2][7] = 4;
    board[3][7] = 5;
    board[4][7] = 6;
    board[5][7] = 4;
    board[6][7] = 3;
    board[7][7] = 2;

    for (j = 0; j <= 7; j++){
        for (k = 0; k <= 7; k++){
            printf(" %d", board[k][j]);
        }
        printf("\n");
    }

    return 0;
}
