#include<iostream>
#include <cstdlib> // for rand function
#include<ctime> // for time function

using namespace std;

void dynamicPenality(int diffInGuess, int& score) {
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

void additionalPenality(int noOfTries, int& score) {
    if (noOfTries > 10)
        score -= (50 * noOfTries);
    else if (noOfTries >= 6 && noOfTries <= 10)
        score -= (20 * noOfTries);
    else if (noOfTries >= 2 && noOfTries <= 5)
        score -= (10 * noOfTries);
}

void bonusPoints(int noOfTries, int& score) {
    if (noOfTries <= 3 && noOfTries >= 1)
        score += (200 * noOfTries);
    else if (noOfTries >= 4 && noOfTries <= 6)
        score += (100 * noOfTries);
}

int main() {
    // ************* generating a random number *************
    srand(static_cast<unsigned int>(time(0))); // srand() is used to generate a random seed to change the random number on every run.
    int randomNumber = (rand() % 1000) + 1; // generate a random number from 1 to 1000

    cout << "I have a random number in my mind, try guessing it in much less tries as possible." << endl;

    // ************* initializing score and noOfTries variable *************
    int score = 1000, noOfTries = 0;


    // ************* inputing user's guess *************
    int userGuess = 0;
    do {
        cout << "Your guess (Between 1 and 1000) : ";
        cin >> userGuess;
        if (userGuess > 0 && userGuess <= 1000) {
            noOfTries++;
        }
        else {
            cout << "Enter a valid guess,";
            continue;
        }

        int diff_in_guess = userGuess - randomNumber;

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
            bonusPoints(noOfTries, score);
            cout << "Your score is : " << score << endl;
            return 0;
        }
        dynamicPenality(diff_in_guess, score); // adding penalities after every wrong guess
    } while (true);

    return 0;
}