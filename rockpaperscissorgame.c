// Rock paper scissor game in c

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int user, computer;
char user_name[20];
int menu()
{
    int choice;
    printf("Enter 1 for Rock \n");
    printf("Enter 2 for Paper \n");
    printf("Enter 3 for Scissor \n");
    printf("Enter 4 to exit \n");
    printf("Enter your name: ");
    scanf("%s", user_name);
    printf("Welcome %s to the Rock Paper Scissor Game");
    printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int gamesetup()
{
    computer = rand() % 4;
    label:
    if (computer == 0)
    {
        computer = rand() % 4;
        goto label;
    }
    user = menu();
    // if (computer == 0)
    // {
    //     computer = rand() % 4;
    // }
    // return computer;
}

void logic()
{
    switch (user)
    {
    case 1:
        if (computer == 1)
        {
            printf("Game Draw \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d",user_name, user);
        }
        else if (computer == 2)
        {
            printf("You Lose \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d", user_name, user);
        }
        else if (computer == 3)
        {
            printf("You Win \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d", user_name, user);
        }
        break;
    case 2:
        if (computer == 1)
        {
            printf("You Win \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d",user_name, user);
        }
        else if (computer == 2)
        {
            printf("Game Draw \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d", user_name, user);
        }
        else if (computer == 3)
        {
            printf("You Lose \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d", user_name, user);
        }
        break;
    case 3:
        if (computer == 1)
        {
            printf("You Lose \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d",user_name, user);
        }
        else if (computer == 2)
        {
            printf("You Win \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d", user_name, user);
        }
        else if (computer == 3)
        {
            printf("Game Draw \n");
            printf("Computer choose: %d \n", computer);
            printf("%s choose: %d", user_name, user);
        }
        break;
    case 4:
        printf("Thank you for playing");
        exit(0);
    default:
        printf("Invalid Choice");
        break;
    }
}
int main()
{
    while (1)
    {
        system("cls");
        gamesetup();
        logic();
        printf("\n");
        getch();
    }
    return 0;
}
