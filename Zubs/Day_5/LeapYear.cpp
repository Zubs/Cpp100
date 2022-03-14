# include <iostream>

using namespace std;

bool isLeapYear(int year);

int main() {
    int input;

    cout << "Please enter a year: ";
    cin >> input;

    if (isLeapYear(input)) cout << input << " is a leap year." << endl;
    else cout << input << " is not a leap year." << endl;

    return 0;
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400) return true;
            else return false;
        } else return true;
    } else return false;
}
