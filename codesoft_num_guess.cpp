#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0)); // seed random number generator
    int number = rand() % 100 + 1;  // random number between 1 and 100
    cout << "Guess My Number Game\n\n";
    int guess_number, tries = 0;
    do{
        cout << "Enter the number :: ";
        cin >> guess_number;
        tries += 1;
        if(guess_number<number){
            cout << "Your estimate number is too low than secret number" << endl;
        }else if(guess_number>number){
            cout << "Your estimate number is too high than secret number" << endl;
        }else{
            cout << "\nYour guess is Correct! You got it in " << tries << " " << "try" << endl;
        }
    } while (guess_number != number);
    system("PAUSE");
    return 0;
}


