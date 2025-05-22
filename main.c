/*
pawn = 1
rook = 2
knight = 3
bishop = 4
queen = 5
king = 6
'0' added at the end for black pieces
*/
#include <stdio.h>

typedef enum {
    EMPTY = 0,
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
} Piece;

typedef struct {
    Piece board[8][8];
} ChessGame;

void init_board(ChessGame *game) {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            game->board[i][j] = EMPTY;
        }
    }

    for (int j = 0; j < 8; j++) {
        game->board[1][j] = PAWN;
        game->board[6][j] = PAWN;
    } 

    game->board[0][0] = ROOK;
    game->board[0][7] = ROOK;

    game->board[7][0] = ROOK;
    game->board[7][7] = ROOK;
}

void print_board(const ChessGame *game) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", game->board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    ChessGame game;
    init_board(&game);
    print_board(&game);
    return 0;
}