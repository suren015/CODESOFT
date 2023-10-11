# CODESOFT

# Task-1 :: Number Guessing Game in C++

## Introduction

This is a simple console-based Number Guessing Game implemented in C++. The game allows users to guess a randomly generated number between 1 and 100. The user can make as many attempts as they want to guess the correct number. When the user successfully guesses the number, the game provides feedback on the number of attempts it took to win.

## Features

- Real-time feedback on each guess, indicating whether the guess was too high or too low.
- Continuous guessing until the correct goal number is identified.
- Objective: Guess the number with as few attempts as possible.

## Code Explanation

### Header and Library Inclusions
The code begins by including the necessary libraries: `iostream` for input and output, `cstdlib` for memory management, and `ctime` for time-related functions.

### Namespace Usage
The `using namespace std;` statement is used to streamline access to functions and objects from the standard library, eliminating the need to prefix them with `std::`.

### Main Function
The `main()` function is defined, where the core logic of the program resides. Three variables, `randomNumber`, `userGuess`, and `attempts`, are initialized to 0. They are used to store the target number, the user's guess, and the count of attempts, respectively.

### Random Number Generation
The `srand(time(0))` function seeds the random number generator using the current time, ensuring a unique sequence of random numbers in each program run. The `rand()` function generates random numbers between 1 and 100, stored in the `randomNumber` variable.

### Game Loop
A while loop prompts the user for guesses until they correctly identify the target number. An if-else if-else control structure provides feedback based on the user's guess:
- If the `userGuess` is greater than `randomNumber`, the system outputs "Try a lower number."
- If the `userGuess` is less than `randomNumber`, the system outputs "Try a higher number."
- If the `userGuess` matches `randomNumber`, the system displays " Congratulations! You've guessed the correct number, which is " `randomNumber`.
  " It took you " `attempts` " attempts to guess it. " where attempts represents the number of attempts made by the user.

### Output
![WhatsApp Image 2023-10-11 at 01 56 38](https://github.com/suren015/CODESOFT/assets/114131620/d97bb1d5-3664-40d2-a1e3-7e5ae02f3b6a)

## Conclusion

This README summarizes the creation and functionality of the Number Guessing Game in C++. Feel free to use and modify the code for your educational or entertainment purposes.

---


# Task-2 :: Simple Calculator in C++

## Introduction

The Simple Calculator Task is a console-based C++ application that enables users to perform fundamental arithmetic operations on two numbers, including addition, subtraction, multiplication, and division. The program provides immediate results and incorporates error handling to prevent division by zero.

## Features

- **Arithmetic Operations:** Supports addition, subtraction, multiplication, and division.
- **Error Handling:** Detects and handles division by zero, displaying a clear error message to users.
- **User-Friendly Interface:** Designed with simplicity in mind, ensuring an intuitive and easy-to-use interface for all users.
- **Continuation:** Enables users to perform multiple calculations in a seamless manner, eliminating the need to restart the program.

## Code Explanation

### Header and Library Inclusions

The code includes the `iostream` library to facilitate input and output operations.

### Main Function

- The `main()` function serves as the program's entry point.
- It starts by displaying a welcoming message and initializes essential variables, such as the operator (`op`), the two input numbers (`num1` and `num2`), and the user's continuation choice (`ch`).

### Calculation Loop

A `while (true)` loop allows users to perform multiple calculations:

1. **User Input:** The program prompts users to input two operands and an operator.

2. **Operator Handling:** A `switch` statement is utilized to execute the selected arithmetic operation (+, -, *, /), with the result displayed immediately.

3. **Division by Zero Check:** For division, the code verifies whether the second number is zero to prevent division by zero errors.

4. **Error Handling:** In case an invalid operator is entered, the program displays an error message.

5. **Continuation:** Following each calculation, the user is given the choice to continue or exit the program. Entering 'o' terminates the program.

`Error Handling:` If an invalid operator is entered, an error message is displayed.

`Continuation:` After each calculation, the user is prompted to continue or exit. Entering 'o' exits the program.

### Output

![WhatsApp Image 2023-10-11 at 11 43 13](https://github.com/suren015/CODSOFT/assets/114131620/2f324f92-27dc-471b-8b4f-0be20eb9bd08)

## Conclusion

This README offers a comprehensive overview of the Simple Calculator Task implemented in C++. Users can effortlessly perform basic arithmetic calculations while benefiting from built-in error handling for division by zero scenarios. Please feel free to use and adapt the code for educational or practical purposes.

---


# Task-3 :: Tic Tac Toe Console Game

## Introduction

Tic Tac Toe Console Game is an implementation of the classic Tic Tac Toe game in C++. It allows two players to take turns marking spaces on a 3x3 grid, with the goal of getting three of their marks in a row. This implementation provides a simple, console-based interface for an enjoyable gaming experience.

## Features

- **Player Interaction:** Players take turns marking spaces as "X" and "O" on the grid.
- **Win Detection:** The game checks for a win when a player gets three of their marks in a row (horizontally, vertically, or diagonally).
- **Draw Detection:** If all spaces on the grid are filled without a win, the game is declared a draw.
- **User-Friendly Interface:** The game's console interface is easy to use and visually appealing.
- **Player Continuation:** Players can continue to play additional games without restarting the program.

## Code Explanation

### Board Drawing

The `board()` function is responsible for drawing the Tic Tac Toe board on the console. It uses an array to represent the state of the grid and displays it in a user-friendly format.

### Win and Draw Detection

The `checkwin()` function examines the state of the grid to determine if the game is over and if there is a winner. It checks for wins in all possible configurations and also detects when the game ends in a draw.

### Game Loop

The `main()` function manages the game loop, allowing two players to take turns marking spaces on the grid. It ensures the correct player's turn and handles user input.

## How to Play

1. Run the program.
2. Players take turns entering the number of the square they want to mark (1 to 9).
3. The game checks for wins or draws and displays the result.
4. To continue playing, enter 'o' when prompted.

## Output

![WhatsApp Image 2023-10-11 at 12 20 23](https://github.com/suren015/CODSOFT/assets/114131620/dbea9a2b-ba87-4e86-9004-5ac8ceaed80c)  ![WhatsApp Image 2023-10-11 at 12 20 36](https://github.com/suren015/CODSOFT/assets/114131620/b18e30b4-8909-4a31-868e-7e8c0e7bf9c4)



## Conclusion

This README provides an overview of the Tic Tac Toe Console Game implemented in C++. It offers a classic gaming experience with user-friendly features and error detection. Feel free to use and modify the code for educational or practical purposes.

---

You can use this Markdown content as a README.md file for your GitHub repository to document your project.



