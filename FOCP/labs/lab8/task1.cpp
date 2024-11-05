#include<iostream>
using namespace std;

//Function declaration
void area();

int main()
{
    area();
}

// function definition 
void area() {
    float area;
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "Area of Circle = " << area;
}