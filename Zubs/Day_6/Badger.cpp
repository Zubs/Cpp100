# include <iostream>

using namespace std;

int main() {
    int badger;

    cout << "How many badgers? ";
    cin >> badger;

    do {
        cout << "Badger ";
        badger = badger - 1;
    } while (badger > 0);

    cout << endl;

    return 0;
}
