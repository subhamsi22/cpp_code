#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    // Default Constructor
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized Constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width
             << ", Height: " << height << endl;
    }
};

int main() {
    // Default Constructor
    Box box1;
    cout << "Box1 dimensions: ";
    box1.display();

    // Parameterized Constructor
    Box box2(3, 9, 5);
    cout << "Box2 dimensions: ";
    box2.display();

    // Copy Constructor
    Box box3 = box2;
    cout << "Box3 dimensions (Copied from Box2): ";
    box3.display();

    return 0;
}
