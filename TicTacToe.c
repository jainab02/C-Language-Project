#include <stdio.h>
#include <stdlib.h>

char box[10] = {'0','1','2','3','4','5','6','7','8','9'};

void print_board();
void makemove(int, char);
int checkForwin();


int main()
{
    int player = 1, i, choice;             //declaring variables 
    char mark;

    printf("        Tic Tac Toe       \n");
    printf("You can play this game with your friend\n\n");

    do
    {
        print_board();

        player = (player % 2) ? 1 : 2;
        //"X" for Player 1 and "0" for player 2

        printf("\nPlayer %d turn \n", player);
        printf("\nenter a number where you want to put your mark : \n");
        scanf("%d", &choice);

        if (player==1)
        {
            mark='X';
            /* code */
        }
        else
        {
            mark='0';
        }
        makemove(choice, mark);
        i = checkForwin(); 
        player++;
        
    } while (i == -1);

    print_board();

    //Display result 
    if (i == 1)
    {

        printf("player %d win \n", --player);
    }
    else
    {
        printf("game draw\n");
    }

    return 0;
}

//function for printing board
void print_board()
{
    printf("Player 1(X)   and   Player 2(0)\n\n");
    printf("  %c  |  %c  |  %c  \n", box[1], box[2], box[3]);
    printf("_____|_____|_____\n");
    printf("  %c  |  %c  |  %c  \n", box[4], box[5], box[6]);
    printf("_____|_____|_____\n");
    printf("  %c  |  %c  |  %c  \n", box[7], box[8], box[9]);
    printf("\n\n");
}

//To make move on board makemove is used
void makemove(int choice, char mark)
{
    if (choice == 1 && box[1] == '1')
        box[1] = mark;
    else if (choice == 2 && box[2] == '2')
        box[2] = mark;
    else if (choice == 3 && box[3] == '3')
        box[3] = mark;
    else if (choice == 4 && box[4] == '4')
        box[4] = mark;
    else if (choice == 5 && box[5] == '5')
        box[5] = mark;
    else if (choice == 6 && box[6] == '6')
        box[6] = mark;
    else if (choice == 7 && box[7] == '7')
        box[7] = mark;
    else if (choice == 8 && box[8] == '8')
        box[8] = mark;
    else if (choice == 9 && box[9] == '9')
        box[9] = mark;
    else
        printf("invalid move\n");
}

//checking for Victory
//function will return 1 for wining
//function will return 0 for draw
//function will return -1 for continuing the game
int checkForwin()
{
    if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }
    else if (box[4] == box[5] && box[5] == box[6])
    {
        return 1;
    }
    else if (box[7] == box[8] && box[8] == box[9])
    {
        return 1;
    }

    else if (box[1] == box[4] && box[4] == box[7])
    {
        return 1;
    }
    else if (box[2] == box[5] && box[5] == box[8])
    {
        return 1;
    }
    else if (box[3] == box[6] && box[6] == box[9])
    {
        return 1;
    }

    else if (box[1] == box[5] && box[5] == box[9])
    {
        return 1;
    }
    else if (box[3] == box[5] && box[5] == box[7])
    {
        return 1;
    }
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
    {
        return 0;
    }

    else
    {
        return -1;
    }
}

//End of the game 
//End of the project