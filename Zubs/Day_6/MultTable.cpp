# include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Please enter a number: ";
    cin >> number;

    cout << "First 21 multiple of " << number << endl;
    for (int counter = 1; counter <= 21; counter += 1) {
        cout << number * counter << endl;
    }

    return 0;
}
