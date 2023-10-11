#include <iostream>
using namespace std;

// Array to represent the Tic Tac Toe board
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

/* FUNCTION TO DRAW THE TIC TAC TOE BOARD */
void board()
{
    // Clear the console
    system("cls");

    // Display the game title
    cout << "\n\n\tTic Tac Toe\n\n";

    // Player symbols
    cout << "Player 1 (X)  -  Player 2 (O)" << endl
         << endl;
    cout << endl;

    // Display the Tic Tac Toe board
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl
         << endl;
}

/* FUNCTION TO RETURN GAME STATUS:
1 FOR GAME IS OVER WITH A WINNER;
0 FOR GAME IS DRAW;
-1 FOR GAME IS STILL IN PROGRESS */
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3]){
        return 1;
    } 
    else if (square[4] == square[5] && square[5] == square[6]){
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9]){
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7]){
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8]){
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9]){
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9]){
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7]){
        return 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}

// Driver Code
int main()
{
    int player = 1, i, choice;
    char mark;

    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && square[choice] == choice + '0')
        {
            square[choice] = mark;
        }
        else
        {
            cout << "Invalid move. Try again.";

            player--;
            cin.ignore();
            cin.get();
        }

        i = checkwin();

        player++;
    } while (i == -1);

    board();

    if (i == 1)
    {
        cout << "Player " << --player << " wins!";
    }
    else
    {
        cout << "It's a draw!";
    }

    cin.ignore();
    cin.get();

    return 0;
}
