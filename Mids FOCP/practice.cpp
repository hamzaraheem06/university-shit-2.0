// efficient leap year program.

// #include<iostream>

// using namespace std;

// bool isLeap(unsigned int year) {
//     if (year % 4 != 0)
//         return false;

//     if (year % 100 != 0)
//         return true;

//     if (year % 400 != 0)
//         return false;

//     return true;
// }

// int main() {
//     unsigned int year;
//     cout << "Enter a year to check whether it is leap year or not: ";
//     cin >> year;

//     if (isLeap(year))
//         cout << "The year " << year << " is a leap year.";
//     else
//         cout << "The year " << year << " is not a leap year.";
//     return 0;
// }


// using the const keyword to define a constant value througout the program.
// #include<iostream>

// using namespace std;

// const string name = "Hamza";

// int main() {
//     name = "Ayesha"; // cannot assign a new value to a constant variable.
//     cout << "Your name is " << name;
//     return 0;
// }

// sizeof function and possible values.

// runtime error.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
//     int x = 1, y = 0;
//     cout << x / y;
//     return 0;
// }

// self learning tasks lecture 10-11
// Write a C++ program that asks the user to input a positive integer, n, and then uses a for loop to calculate and print the sum of all natural numbers from 1 to n.
// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     do {
//         cout << "Enter a positive number: ";
//         cin >> num;
//     } while(num<=0);

//     int sum = 0;
//     for(int i = 1; i <= num; i++)
//         sum+=i;

//     cout<<"The sum of positive integers till "<<num<<" is "<<sum<<endl;
//     return 0;
// }  

// Write a C++ program that uses a while loop to reverse the digits of a given positive integer num.The program should print the reversed number.

#include<iostream>

using namespace std;

int reverseNumber(unsigned int num) {
    int remainder, reversedNumber = 0;
    do {
        remainder = num % 10; // this gets the last integer in the number, and stores it in remainder
        reversedNumber = (reversedNumber * 10) + remainder; // this stores this remainder and add them in proper reverse order. 
        // lets understand the upper line with example. 
        //If the user enters 1234 as num, remainder statement will return the last integer i.e. 4. Since we initialized reversedNumber as 0, ( 0 * 10 ) + 4 = 4 will be stored in reversedNumber. 
        // On second iteration, the num is now 123, we get remainder = 3 this time.
        // reversedNumber = (4 * 10 ) + 3 = 43
        // On third iteration, the num is 12, we get remainder =  2.
        // reversedNumber = (43 * 10 ) + 2 = 432
        // On fourth iteration, the num is 1, and we get remainder = 1
        // reversedNumber = (432 * 10 ) + 1 = 4321

        // after this the num becomes zero due to division by 10. And the loop terminate as we mentioned in condition
        num /= 10; // this removes the last integer after seperating it.
    } while (num != 0);
    return reversedNumber; // returning the reversedNumber for displaying
}

// for LCM of two numbers

/// @brief Gives the Least Common Multiple of two numbers passed to it.
/// @param num1 
/// @param num2 
/// @return returns a LCM of two numbers passed to it.
int leastCommonMultiple(int num1, int num2) {
    int largestOfTwo = (num1 > num2) ? num1 : num2; // the LCM cannot be less the largest among the numbers.
    // LCM can be: 
    // 1. The largest number itself, therefore, initializing the i with largestOfTwo
    // 2. The product of the numbers, therefore, including the product of the numbers in the sentinal value
    // 3. The numbers between the initialzing and sentinal value.
    for (int i = largestOfTwo; i <= num1 * num2; i++)
        if ((i % num1 == 0) && (i % num2 == 0)) // if the i ( possible LCM ) gets divisible by both numbers, it is the LCM so we return it.
            return i;

    return 0; // returning 0 for any miscalculation
}

int main() {
    cout << leastCommonMultiple(24, 46);
}