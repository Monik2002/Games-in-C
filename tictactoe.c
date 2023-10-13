#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

char cube[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkwin();
void drawboard();

int main()
{
    int player = 1, i, choice;
    char mark; // either X or Y
    do
    {
        drawboard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        if (choice == 1 && cube[1] == '1')
        {
            cube[1] = mark;
        }
        else if (choice == 2 && cube[2] == '2')
        {
            cube[2] = mark;
        }
        else if (choice == 3 && cube[3] == '3')
        {
            cube[3] = mark;
        }
        else if (choice == 4 && cube[4] == '4')
        {
            cube[4] = mark;
        }
        else if (choice == 5 && cube[5] == '5')
        {
            cube[5] = mark;
        }
        else if (choice == 6 && cube[6] == '6')
        {
            cube[6] = mark;
        }
        else if (choice == 7 && cube[7] == '7')
        {
            cube[7] = mark;
        }
        else if (choice == 8 && cube[8] == '8')
        {
            cube[8] = mark;
        }
        else if (choice == 9 && cube[9] == '9')
        {
            cube[9] = mark;
        }
        else
        {
            printf("Invalid move");
            player--;
            getch();
        }
        i = checkwin();
        player++;
    } while (i == -1);
    drawboard();
    if (i == 1)
    {
        printf("==>\aPlayer %d won ", --player);
    }
    else
    {
        printf("==>\aGame draw");
    }
    getch();
    return 0;
}

int checkwin()
{
    if (cube[1] == cube[2] && cube[2] == cube[3])
    {
        return 1;
    }
    else if (cube[4] == cube[5] && cube[5] == cube[6])
    {
        return 1;
    }
    else if (cube[7] == cube[8] && cube[8] == cube[9])
    {
        return 1;
    }
    else if (cube[1] == cube[4] && cube[4] == cube[7])
    {
        return 1;
    }
    else if (cube[2] == cube[5] && cube[5] == cube[8])
    {
        return 1;
    }
    else if (cube[3] == cube[6] && cube[6] == cube[9])
    {
        return 1;
    }
    else if (cube[1] == cube[5] && cube[5] == cube[9])
    {
        return 1;
    }
    else if (cube[3] == cube[5] && cube[5] == cube[7])
    {
        return 1;
    }
    else if (cube[1] != '1' && cube[2] != '2' && cube[3] != '3' && cube[4] != '4' && cube[5] != '5' && cube[6] != '6' && cube[7] != '7' && cube[8] != '8' && cube[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void drawboard()
{
    system("cls");
    printf("\tTic Tac Toe");
    printf("\n");
    printf("\n");
    printf("\tPlayer 1 (X) - Player 2 (O)");
    printf("\n");
    printf("\n");
    printf("  |  |   \n");
    printf("%c |%c |%c \n", cube[1], cube[2], cube[3]);
    printf("__|__|__ \n");
    printf("  |  |   \n");
    printf("%c |%c |%c \n", cube[4], cube[5], cube[6]);
    printf("__|__|__ \n");
    printf("  |  |   \n");
    printf("%c |%c |%c \n", cube[7], cube[8], cube[9]);
    printf("__|__|__ \n");
}


