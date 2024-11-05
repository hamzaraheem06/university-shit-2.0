#include<iostream>
#include<cmath>

using namespace std;

void calculateArea(float& areaCircle, float& areaEllipse, float pi, float minor_axis, float major_axis, float radius) {
    areaCircle = pi * pow(radius, 2);
    areaEllipse = pi * (major_axis / 2) * (minor_axis / 2);
}

float show_difference(float lenght, float width) {
    float diagonal = sqrt(pow(lenght, 2) + pow(width, 2)); // calculating the diagonal for radius of the circle
    float radius = diagonal / 2, major_axis = width, minor_axis = lenght, pi = 3.14;
    float areaCircle, areaEllipse;
    calculateArea(areaCircle, areaEllipse, pi, minor_axis, major_axis, radius);
    return areaCircle - areaEllipse;
}

int main() {
    float length, width;
    do {
        cout << "Enter  the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    } while (length < 0 || width < 0);
    cout << "The differnce in area of circle and area of ellipse is: " << show_difference(length, width);
    return 0;
}