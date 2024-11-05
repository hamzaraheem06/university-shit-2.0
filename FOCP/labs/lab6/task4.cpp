#include<iostream>
#include<cmath>

using namespace std;

float calcHarmonicMean(int n) { // n is the number of terms
    float sumOfReciprocalTerms = 0, numHolder; // numHolder is a temporary variable to hold the user input numbers

    int i = 1;
    string numOrdinal; // to add an ordinal to number
    do {
        numOrdinal = (i == 1) ? "st" : (i == 2) ? "nd" : (i == 3) ? "rd" : "th";
        cout << "Enter " << i << numOrdinal << " number: ";
        cin >> numHolder;
        sumOfReciprocalTerms += pow(numHolder, -1);
        i++;
    } while (i <= n); // do while loop to calculate sum of reciprocal of numbers entered by the user.

    return (n / sumOfReciprocalTerms); // calculating and returning harmonic mean 
}

int main() {
    int noOfTerms;
    cout << "Enter the number of terms for which you want to calculate harmonic mean: ";
    cin >> noOfTerms;

    cout << "The harmonic mean for " << noOfTerms << " is " << calcHarmonicMean(noOfTerms); // displaying the result of the function

    return 0;
}