#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guess My Number Game!\n" << endl;
    cout << "I've selected a number between 1 and 100. Try to guess it.\n" << endl;

    while (true)
    {
        cout << "Enter your guess :: ";
        cin >> userGuess;
        attempts++;

        if (userGuess == randomNumber)
        {
            cout << "Congratulations! You've guessed the correct number, which is " << randomNumber << "." << endl;
            cout << "It took you " << attempts << " attempts to guess it." << endl;
            break;
        }
        else if (userGuess < randomNumber)
        {
            cout << "Try a higher number." << endl;
        }
        else
        {
            cout << "Try a lower number." << endl;
        }
    }

    system("PAUSE");
    return 0;
}
