#include<iostream>
#include<cmath>

using namespace std;

float points_distance(float x1, float y1, float x2, float y2) {
    return pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
}

int main() {
    float x1, x2, y1, y2;
    cout << "Enter x and y co-ordinates of point 1: ";
    cin >> x1 >> y1;
    cout << "Enter x and y co-ordinates of point 2: ";
    cin >> x2 >> y2;

    cout << "The distance between ( " << x1 << ", " << y1 << " ) and ( " << x2 << ", " << y2 << " ) is " << points_distance(x1, y1, x2, y2);
    return 0;
}