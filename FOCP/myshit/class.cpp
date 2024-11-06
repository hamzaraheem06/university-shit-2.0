#include <iostream>

using namespace std;

class ParentClass {
protected:
    void sayParent() {
        cout << "I am parent class.";
    }
};

class ChildrenClass : ParentClass {

};

int main() {
    ChildrenClass o1;
    o1.sayParent();

    return 0;
}