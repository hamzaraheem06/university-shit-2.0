#include<iostream>
using namespace std;
void display(int rows) {
    int  spacer = rows;
    int spacer1 = 1;
    for (int count = 1; count <= rows; count++) {
        for (int count1 = 1; count1 <= spacer; count1++)
            cout << " ";
        cout << "*";
        spacer--;
        if (count != 1) {
            for (int count2 = 1; count2 <= spacer1; count2++)
                cout << " ";
            spacer1 = spacer1 + 2;
            cout << "*";
        }
        cout << endl;
    }
    int spacer2 = 1;

    for (int count3 = 1; count3 <= rows - 1; count3++) {
        for (int count5 = spacer2; count5 >= 1; count5--)
            cout << " ";
        spacer2 = spacer2 + 1;
        cout << "*";
        spacer1 = spacer1 - 2;
        for (int count4 = 1; count4 <= spacer1; count4++)
            cout << " ";
        cout << "*" << endl;
    }
    for (int counter = 1; counter <= rows; counter++)
        cout << " ";
    cout << "*";
}
int  main() {
    int num;
    do {
        cout << "Enter a number from 1 to 10: ";
        cin >> num;

    } while (num <= 0 || num > 10);
    display(num);
    return 0;
}