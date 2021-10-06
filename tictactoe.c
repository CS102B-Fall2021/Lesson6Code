#include <stdio.h>

int n = 2;
char board[3][3];

void printBoard();
void initBoard();
int isInvalidMove(int input);
void chooseMove(char player);
int checkWinCondition(char player);

int main() {
    initBoard();
    printBoard();
    char whosTurn = 'X';
    for (int z=0; z<9; z++) {
        chooseMove(whosTurn);
        printBoard();
        int didSomeoneWin = checkWinCondition(whosTurn);
        if (didSomeoneWin) {
            return 0;
        }
        if(z % 2 == 0) { // whoseTurn == 'X'
            whosTurn = 'O';
        } else {
            whosTurn = 'X';
        }
    }
    printf("It's a draw. :(\n");
    return 0;
}

void initBoard() {
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            board[i][j] = '-';
        }
    }
}

void printBoard() {
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int isInvalidMove(int input) {
    if (input<1 || input>9) {
        return 1;
    }

    int row = (input - 1)/3;
    int col = (input - 1)%3;
    if (board[row][col]=='-') {
        return 0;
    } else {
        return 1;
    }
}

void chooseMove(char player) {
    printf("%c's turn. Select a space from 1-9: \n", player);

    int input;
    do {
        printf("Please enter a valid input: ");
        scanf("%d", &input);
    } while (isInvalidMove(input));

    printf("You entered %d\n", input);

    int row = (input - 1)/3;
    int col = (input - 1)%3;

    printf("row=%d, col=%d\n", row, col);
    
    board[row][col] = player;
}

int checkWinCondition(char player) {
    printf("Checking if %c won...\n", player);

    for (int row=0; row<3; row++) {
        if (board[row][0]==player &&
            board[row][1]==player &&
            board[row][2]==player) {
            printf("%c WON\n", player);
            return 1;
        }
    }

    for (int col=0; col<3; col++) {
        if (board[0][col]==player &&
            board[1][col]==player &&
            board[2][col]==player) {
            printf("%c WON\n", player);
            return 1;
        }
    }

    if (board[0][0]==player &&
        board[1][1]==player &&
        board[2][2]==player) {
        printf("%c WON\n", player);
        return 1;
    }

    if (board[0][2]==player &&
        board[1][1]==player &&
        board[2][0]==player) {
        printf("%c WON\n", player);
        return 1;
    }
    return 0;
}
