#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char grille[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    char response = ' ';

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard();

            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N): ");
        scanf("%c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');

    printf("Thanks for playing!");

    return 0;
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            grille[i][j] = ' ';
        }
    }
}
void printBoard()
{
    printf(" %c | %c | %c ", grille[0][0], grille[0][1], grille[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", grille[1][0], grille[1][1], grille[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", grille[2][0], grille[2][1], grille[2][2]);
    printf("\n");
}
int checkFreeSpaces()
{
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grille[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if (grille[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else
        {
            grille[x][y] = PLAYER;
            break;
        }
    } while (grille[x][y] != ' ');
}
void computerMove()
{
    // creates a seed based on current time
    srand(time(0));
    int x;
    int y;

    if (checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (grille[x][y] != ' ');

        grille[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
}
char checkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if (grille[i][0] == grille[i][1] && grille[i][0] == grille[i][2])
        {
            return grille[i][0];
        }
    }
    // check columns
    for (int i = 0; i < 3; i++)
    {
        if (grille[0][i] == grille[1][i] && grille[0][i] == grille[2][i])
        {
            return grille[0][i];
        }
    }
    // check diagonals
    if (grille[0][0] == grille[1][1] && grille[0][0] == grille[2][2])
    {
        return grille[0][0];
    }
    if (grille[0][2] == grille[1][1] && grille[0][2] == grille[2][0])
    {
        return grille[0][2];
    }

    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("YOU WIN!");
    }
    else if (winner == COMPUTER)
    {
        printf("YOU LOSE!");
    }
    else
    {
        printf("IT'S A TIE!");
    }
}