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

This summarizes the creation and functionality of the Number Guessing Game in C++. Feel free to use and modify the code for your educational or entertainment purposes.

# Task-2 :: Simple Calculator in C++

## Introduction

This is a simple Calculator Task implemented in C++. In this you will learn about C++ program to make simple calculator using switch case i.e. Addition, Subtraction, Multiplication, and Division.

This program uses 4 different cases for performing the different mathematical operation. You have to select different options for addition, subtraction, multiplication, and division.

## Features

- Support for fundamental arithmetic operations, including addition, subtraction, multiplication, and division. 
- Utilization of a switch-case control structure to determine the chosen arithmetic operation based on user input.
- Performing the selected arithmetic operation on the input values and displaying the result to the user.
- Graceful handling of potential errors, such as division by zero or invalid input, to prevent program crashes.
- Continuous interaction with the user, allowing them to perform multiple calculations without restarting the program.
