#include<iostream>
using namespace std;

//Function declaration
void Area(float&, float&);

int main()
{
    float radius, area;
    cout << "Enter the radius: ";
    cin >> radius;
    Area(radius, area);
    cout << "Area of Circle = " << area;
}
// function definition 
void Area(float& radius, float& area) { // passing the reference of area and float 
    area = 3.14 * radius * radius;
}