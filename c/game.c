#include <stdio.h>

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("-----------\n");
    }
    printf("\n");
}

// Function to check if a player has won
int checkWin(char board[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int main()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    int currentPlayer = 1; // Player 1 starts
    int moves = 0;
    int row, col;

    while (moves < 9)
    {
        printf("Current board:\n");
        printBoard(board);

        printf("Player %d, enter row and column (0-2) to place your move: ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ')
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        if (currentPlayer == 1)
            board[row][col] = 'X';
        else
            board[row][col] = 'O';

        if (checkWin(board, 'X'))
        {
            printf("Player 1 (X) wins!\n");
            break;
        }
        else if (checkWin(board, 'O'))
        {
            printf("Player 2 (O) wins!\n");
            break;
        }

        currentPlayer = 3 - currentPlayer; // Switch player (1 -> 2 or 2 -> 1)
        moves++;
    }

    if (moves == 9)
    {
        printf("It's a draw!\n");
    }

    printf("Final board:\n");
    printBoard(board);

    return 0;
}
