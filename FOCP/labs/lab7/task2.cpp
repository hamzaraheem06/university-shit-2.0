#include<iostream>

using namespace std;
bool is_prime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            break;
    }

    if (i > num / 2)
        return true;
    else
        return false;
}

int next_prime(int num) {
    while (true) {
        if (is_prime(num))
            return num;
        num++;
    }
}

int main() {
    int num;
    do {
        cout << "Enter a number : ";
        cin >> num;
        if (num > 0)
            cout << "The next prime number is : " << next_prime(num) << endl;
        else if (num == 0)
            return 0;
        else {
            cout << "Please enter a number greater than 0." << endl;
            continue;
        }
    } while (true);
    return 0;
}