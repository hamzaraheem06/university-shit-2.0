#include<iostream>

using namespace std;
unsigned int factorial(int num) {
    int fact = 1;
    for (int i = num; i >= 1; i--)
        fact *= i;
    return fact;
}

bool isStrong(int num) {
    int sum = 0, remainder, tempNum = num;
    do {
        remainder = tempNum % 10;
        sum += factorial(remainder);
        tempNum /= 10;
    } while (tempNum != 0);

    if (sum == num)
        return true;
    else
        return false;
}

int main() {
    int num;
    char userChoice = 'y';
    do {
        do {
            cout << "Enter a number to check if it is strong number: ";
            cin >> num;
        } while (num <= 0);

        if (isStrong(num))
            cout << num << " is a strong number." << endl;
        else
            cout << num << " is not a strong number. " << endl;

        cout << "Do you want to continue ( y to continue ) : ";
        cin >> userChoice;
    } while (userChoice == 'y');

    return 0;
}