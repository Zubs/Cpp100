# include <iostream>

using namespace std;

int findArea(int length, int width  = 20, int height = 12);

int main() {
    int length = 100, width = 50, height = 2, area;

    area = findArea(length, width, height);
    cout << "First area is " << area << endl;

    area = findArea(length, width);
    cout << "Second area is " << area << endl;

    area = findArea(length);
    cout << "Third area is " << area << endl;

    return 0;
}

int findArea(int length, int width, int height) {
    return length * width * height;
}
