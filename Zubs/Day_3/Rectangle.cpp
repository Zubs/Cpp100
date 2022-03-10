# include <iostream>

using namespace std;

int main() {
    typedef unsigned short USHORT; // New type definition

    USHORT width = 26, length = 40;
    USHORT area = width * length;

    cout << "Width: " << width << endl;
    cout << "Length: " << length << endl;
    cout << "Area: " << area << endl;

    return 0;
}
