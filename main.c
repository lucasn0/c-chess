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
#include <stdbool.h>

typedef enum {
    EMPTY = 0,

    WHITE_PAWN = 1,
    WHITE_ROOK = 2,
    WHITE_KNIGHT = 3,
    WHITE_BISHOP = 4,
    WHITE_QUEEN = 5,
    WHITE_KING = 6,

    BLACK_PAWN = -1,
    BLACK_ROOK = -2,
    BLACK_KNIGHT = -3,
    BLACK_BISHOP = -4,
    BLACK_QUEEN = -5,
    BLACK_KING = -6,
} Piece;

typedef enum { WHITE, BLACK } Player;

typedef struct {
    Piece board[8][8];
    Player current_turn;
} ChessGame;

void init_board(ChessGame *game) {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            game->board[i][j] = EMPTY;
        }
    }

    for (int j = 0; j < 8; j++) {
        game->board[1][j] = BLACK_PAWN;
        game->board[6][j] = WHITE_PAWN;
    } 

    game->board[0][0] = BLACK_ROOK;
    game->board[0][1] = BLACK_KNIGHT;
    game->board[0][2] = BLACK_BISHOP;
    game->board[0][3] = BLACK_QUEEN;
    game->board[0][4] = BLACK_KING;
    game->board[0][5] = BLACK_BISHOP;
    game->board[0][6] = BLACK_KNIGHT;
    game->board[0][7] = BLACK_ROOK;

    game->board[7][0] = WHITE_ROOK;
    game->board[7][1] = WHITE_KNIGHT;
    game->board[7][2] = WHITE_BISHOP;
    game->board[7][3] = WHITE_QUEEN;
    game->board[7][4] = WHITE_KING;
    game->board[7][5] = WHITE_BISHOP;
    game->board[7][6] = WHITE_KNIGHT; 
    game->board[7][7] = WHITE_ROOK;

    game->current_turn = WHITE;
}

//movement code... zzz, will do later.

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
    bool game_running = true;

    while (game_running) {
        print_board(&game);

        printf("%s to move. Enter your move: ",
            game.current_turn == WHITE ? "White" : "Black");

    }

    return 0;
}