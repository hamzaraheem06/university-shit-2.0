#include<iostream>

using namespace std;
int main() {
    int sum = 0, evenNumber, noOfInputs = 1;
    do {
        cout << "Enter an even number: ";
        cin >> evenNumber;
        if (evenNumber % 2 == 0) {
            noOfInputs++;
            sum += evenNumber;
        }
        else {
            cout << evenNumber << " is not an even number. " << endl;
            continue;
        }

    } while (noOfInputs <= 10);

    cout << "The sum of 10 even numbers entered by you is: " << sum << endl;
    return 0;
}