# include <iostream>

using namespace std;

int findArea(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, width, area;

    cout << "What is your length? ";
    cin >> length;

    cout << "What is your breadth? ";
    cin >> width;

    area = findArea(length, width);

    cout << "The area is " << area << "." << endl;

    return 0;
}
