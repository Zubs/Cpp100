# include <iostream>

using namespace std;

int main() {
    int rows, columns;
    char character;

    cout << "How many rows? ";
    cin >> rows;

    cout << "How many columns? ";
    cin >> columns;

    cout << "What character do you want to display? ";
    cin >> character;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cout << character;

        cout << endl;
    }

    return 0;
}
