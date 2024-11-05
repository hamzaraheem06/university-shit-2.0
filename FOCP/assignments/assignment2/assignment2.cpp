#include<iostream>
#include<iomanip> // for setw function
#include <cstdlib> // for rand function
#include<ctime> // for time function

using namespace std;

//**************** Task A : Number Pyramid ****************
void TaskA() {
    //take number of rows as input from the user
    int rows;
    do {
        cout << "Enter the number of rows: ";
        cin >> rows;
    } while (rows < 0);
    //loop for rows
    for (int i = 1; i <= rows;i++) {
        //loop for spacing 
        for (int a = 1;a <= rows - i;a++) {
            cout << setw(3) << " ";
        }
        //loop for increasing pattern
        int k = i;
        for (int j = 1; j != i + 1;j++) {
            cout << setw(3) << k;
            k += 1;
        }
        //loop for dereasing pattern
        int m = k - 2;
        for (int l = 1; l != i;l++) {
            cout << setw(3) << m;
            m = m - 1;
        }
        cout << endl;
    }
}

//**************** Task B : Calculator ****************
int add(int num1, int num2) {
    return num1 + num2;
} // function to return the sum of two numbers

int subtract(int num1, int num2) {
    return num1 - num2;
} // function to return the subtraction of two numbers

int multiply(int num1, int num2) {
    return num1 * num2;
} // function to return the product of two numbers

float divide(float num1, float num2) {
    return (num1 / num2);
} // function to return the quotient value of two numbers

int remainder(int num1, int num2) {
    return num1 % num2;
} // function to return the remainder of two numbers

long double exponentiation(int num1, int num2) {
    int exponent = 1;
    for (int i = 1; i <= num2; i++)
        exponent *= num1;
    return exponent;
} // function to return value of first number raised to power of second number

void getNumbers(int& num1, int& num2) { // passing the reference of num1, and num2 so that the changes are made in the original variables and not the copies or formal variables.
    do {
        cout << "Enter new numbers : ";
        cin >> num1 >> num2;
        cout << "First Number = " << num1 << ", Second Number = " << num2 << endl;
    } while (num1 == 0 && num2 == 0); // do while make sures that the input numbers are not both zero. If they are zero, it will run till eventually one of the number is non-zero
} // function to get input numbers

void taskB() {
    int num1 = 0, num2 = 0;
    cout << "First Number = " << num1 << ", Second Number = " << num2 << endl;


    cout << "n- Enter new numbers\n\na- Addition\ns- Subtraction\nm- Multiplicaton\nd- Division\nr- Remainder\ne- Exponentiation\n\nx- Exit Program" << endl; // display our menu / options list

    char userChoice;

    while (true) { // while loop is set to infinite so that the user can decide when he wants to exit.
        cout << "Select an option: ";
        cin >> userChoice; // taking the userChoice i.e. the operation user wants to perform

        // checking if the variables are not un-initialized, and if the user want to enter values or exit the program.
        if (num1 == 0 && num2 == 0 && userChoice != 'n' && userChoice != 'x') {
            cout << "Enter numbers first." << endl;
            continue;
        }

        switch (userChoice) { // self-explainatory switch statement and its cases
        case 'n':
            getNumbers(num1, num2);
            break;
        case 'a':
            cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
            break;
        case 's':
            cout << "The subtraction of " << num1 << " from " << num2 << " is " << subtract(num1, num2) << endl;
            break;
        case 'm':
            cout << "The product of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
            break;
        case 'd':
            cout << "The quotient of " << num1 << " by " << num2 << " is " << divide(num1, num2) << endl;
            break;
        case 'r':
            cout << "The remainder of " << num1 << " after dividing by " << num2 << " is " << remainder(num1, num2) << endl;
            break;
        case 'e':
            cout << "The exponent of " << num1 << " raised to power " << num2 << " is " << exponentiation(num1, num2) << endl;
            break;
        case 'x':
            return; // if the user enters 'x' the program returns 0 to main function, i.e. exit the main function.
        }
    }
}

//**************** Task C : Guess the number ****************

void dynamicPenality(int diffInGuess, int& score) { //dynamic penalities are applied after every guess. The conditions are provided.
    if (diffInGuess > 500)
        score -= 100;
    else if (diffInGuess > 300 && diffInGuess <= 500)
        score -= 50;
    else if (diffInGuess > 200 && diffInGuess <= 300)
        score -= 30;
    else if (diffInGuess > 100 && diffInGuess <= 200)
        score -= 20;
    else if (diffInGuess > 10 && diffInGuess <= 100)
        score -= 10;
    else if (diffInGuess >= 1 && diffInGuess <= 10)
        score -= 5;
}

void additionalPenality(int noOfTries, int& score) { // additional penalities are applied at the end of the game, based on the number of guesses. 
    if (noOfTries > 10)
        score -= (50 * noOfTries);
    else if (noOfTries >= 6 && noOfTries <= 10)
        score -= (20 * noOfTries);
    else if (noOfTries >= 2 && noOfTries <= 5)
        score -= (10 * noOfTries);
}

void bonusPoints(int noOfTries, int& score) { // bonus points are given to user for ramarkable guessing
    if (noOfTries <= 3 && noOfTries >= 1)
        score += (200 * noOfTries);
    else if (noOfTries >= 4 && noOfTries <= 6)
        score += (100 * noOfTries);
}

void taskC() {
    srand(static_cast<unsigned int>(time(0))); // srand() is used to generate a random seed to change the random number on every run.
    int randomNumber = (rand() % 1000) + 1; // generate a random number from 1 to 1000

    cout << "I have a random number in my mind, try guessing it in much less tries as possible." << endl;
    int score = 1000, noOfTries = 0; // declaring and initializing the main game values.

    int userGuess = 0;
    do {
        cout << "Your guess (Between 1 and 1000) : ";
        cin >> userGuess;
        if (userGuess > 0 && userGuess <= 1000) {
            noOfTries++;// if a user enter a valid guess, we increase the no of tries by 1.
        }
        else {
            cout << "Enter a valid guess,";
            continue; // making sure the user enter a valid value before we check the guess.
        }

        int diff_in_guess = userGuess - randomNumber; // self explanatory

        if (diff_in_guess >= 200) {
            cout << "Too high" << endl;
        }
        else if (diff_in_guess < 200 && diff_in_guess > 10) {
            cout << "High" << endl;
        }
        else if (diff_in_guess <= 10 && diff_in_guess > 0) {
            cout << "Slightly high" << endl;
        }
        else if (diff_in_guess >= -10 && diff_in_guess < 0) {
            cout << "Slightly low" << endl;
        }
        else if (diff_in_guess < -10 && diff_in_guess > -200) {
            cout << "Low" << endl;
        }
        else if (diff_in_guess < -200) {
            cout << "Too Low" << endl;
        }
        else if (diff_in_guess == 0) {
            cout << "You guessed the random number in " << noOfTries << " tries! " << endl;
            additionalPenality(noOfTries, score);
            bonusPoints(noOfTries, score); // calculating the final score by adding additional penalities and rewarding bonus points.
            cout << "Your score is : " << score << endl;
            return;
        }
        dynamicPenality(diff_in_guess, score); // adding penalities after every wrong guess
    } while (true);
}

int main() {
    char userChoice;
    do {
        cout << "\n\na- Print a number pyramid\nb- Calculator\nc- Guess the number \nq- To exit the program\n\nEnter your choice: ";
        cin >> userChoice;

        switch (userChoice) {
        case 'a':
            TaskA();
            break;
        case 'b':
            taskB();
            break;
        case 'c':
            taskC();
            break;
        case 'q':
            return 0;
        default:
            cout << "Choose a valid option.";
            continue;
        }
    } while (true); // giving the user choice to perform a concerning task
    return 0;
}