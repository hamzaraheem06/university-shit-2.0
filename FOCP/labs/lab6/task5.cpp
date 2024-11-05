#include<iostream>

using namespace std;

void MilesToKm() {
    float miles;
    cout << "Enter distance in miles:";
    cin >> miles;
    cout << "Equivalent distance in kilometers is: " << miles * 1.60934 << "\n\n";
}

void CelsiusToFahrenhiet() {
    float tempInCelsius;
    cout << "Enter temperature in Celsius:";
    cin >> tempInCelsius;
    cout << "Equivalent temperature in Fahrenhiet is: " << (tempInCelsius * 9.0 / 5.0) + 32 << "\n\n";
}

void FeetToMeter() {
    float Feets;
    cout << "Enter distance in feets:";
    cin >> Feets;
    cout << "Equivalent distance in meters is: " << Feets * 0.3048 << "\n\n";
}

void YardsToMeters() {
    float Yards;
    cout << "Enter distance in yards:";
    cin >> Yards;
    cout << "Equivalent distance in feets is: " << Yards * 0.9144 << "\n\n";
}

int main() {
    char userInput;
    do {
        cout << "Conversion Program \n\na) Miles to Km \nb) Celsius to Fahrenheit \nc) Feet to meters \nd) Yards to meters \ne) Exit program\n\n";

        cout << "Select an option: ";
        cin >> userInput;
        switch (userInput) {
        case 'a':
            MilesToKm();
            break;
        case 'b':
            CelsiusToFahrenhiet();
            break;
        case 'c':
            FeetToMeter();
            break;
        case 'd':
            YardsToMeters();
            break;
        case 'e':
            return 0;
        default:
            cout << "Please select one of the given options.\n\n";
            continue;
        }
    } while (true);

    return 0;
}