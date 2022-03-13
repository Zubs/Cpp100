#include <iostream>

using namespace std;

float fahrenheit, celsius;

void convert();

int main() {
    cout << "Please enter your Fahrenheit temperature: ";
    cin >> fahrenheit;

    convert();

    cout << fahrenheit << " degree is " << celsius << " in Celsius." << endl;
}

void convert() {
    celsius = ((fahrenheit - 32) * 5) / 9;
}
