# include <iostream>

using namespace std;

int main() {
    short year = 2016;

    cout << "The year " << ++year << " passes." << endl;
    cout << "The year " << ++year << " passes." << endl;
    cout << "The year " << ++year << " passes." << endl;

    cout << "It is now " << year << "." << endl;
    cout << "Has Messi won any Champions League yet?" << endl;

    cout << "The year " << year++ << " passes." << endl;
    cout << "The year " << year++ << " passes." << endl;
    cout << "The year " << year++ << " passes." << endl;

    cout << "If he is not a fraud, he must have won it by now." << endl;
}
