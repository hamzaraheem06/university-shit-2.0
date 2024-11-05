#include<iostream>
using namespace std;

int multiply(int, int, int, int, int); // function declaration
int main() {
    int noOfTerms;
    int num1, num2, num3, num4, num5;
    num1 = num2 = num3 = num4 = num5 = 1; // removing the garbage value
    do {
        cout << "Enter the number of terms (2-5): ";
        cin >> noOfTerms;
    } while (noOfTerms < 2 || noOfTerms>5); // no of terms input
    switch (noOfTerms) // function call according to no of terms
    {
    case 2:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "The product of two numbers is: " << multiply(num1, num2, num3, num4, num5);
        break;
    case 3:
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
        cout << "The product of three numbers is: " << multiply(num1, num2, num3, num4, num5);
        break;
    case 4:
        cout << "Enter four numbers: ";
        cin >> num1 >> num2 >> num3 >> num4;
        cout << "The product of four numbers is: " << multiply(num1, num2, num3, num4, num5);
        break;
    case 5:
        cout << "Enter five numbers: ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        cout << "The product of four numbers is: " << multiply(num1, num2, num3, num4, num5);
        break;
    }
}

int multiply(int num1 = 1, int num2 = 1, int num3 = 1, int num4 = 1, int num5 = 1) { // function definition
    return num1 * num2 * num3 * num4 * num5;
}