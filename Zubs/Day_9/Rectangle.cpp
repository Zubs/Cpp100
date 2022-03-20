# include <iostream>
# include "Rectangle.hpp"

using namespace std;

int main() {
    Rectangle myRectangle(100, 20, 50, 80);

    cout << "Area of rectangle: " << myRectangle.getArea() << "cm2." << endl;
}
