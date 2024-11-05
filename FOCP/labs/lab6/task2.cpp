// #include<iostream>

// using namespace std;
// int main() {
// int number;
// do {
//     cout << "Enter a single digit odd number: ";
//     cin >> number;
//     if (number < 1 && number>9)
//         continue;
// } while (number % 2 == 0);

//     for (int i = number; i >= 1; i -= 2) {

//         // Print leading spaces
//         for (int j = 0; j < (number - i) / 2; j++) {
//             cout << " ";
//         }

//         // Print numbers
//         for (int k = 0; k < i; k++) {
//             if (k = i - 1 || k == 0)
//                 cout << i;
//             else
//                 cout << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int num;
    do {
        cout << "Enter a single digit odd number : ";
        cin >> num;
        if (num < 1 && num>9)
            continue;
    } while (num % 2 == 0);


    const int dummy = num;
    for (int i = 1;i <= (dummy + 1) / 2;i++) {
        //for first line
        if (i == 1) {
            for (int j = 1; j <= num;j++) {
                cout << num;
            }
        }
        //for space at start
        for (int k = 1; k <= i - 1;k++)
            cout << " ";
        if (i > 1) {
            num -= 2;
            //print for first time number
            cout << num;
            //for spaces in middle
            for (int f = 1;f <= num - 2;f++)
                cout << " ";
            //print for second time
            if (num > 1)
            {
                cout << num;
            }
        }
        cout << endl;
    }
}