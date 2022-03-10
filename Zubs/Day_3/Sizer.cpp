# include <iostream>

using namespace std;

int main () {
    cout << "Variables and their sizes" << endl;

    cout << "Int" << " =====> " << sizeof(int) << " bytes" << endl;
    cout << "Short Int" << " =====> " << sizeof(short) << " bytes" << endl;
    cout << "Long Int" << " =====> " << sizeof(long) << " bytes" << endl;
    cout << "Char" << " =====> " << sizeof(char) << " bytes" << endl;
    cout << "Bool" << " =====> " << sizeof(bool) << " bytes" << endl;
    cout << "Float" << " =====> " << sizeof(float) << " bytes" << endl;
    cout << "Double" << " =====> " << sizeof(double) << " bytes" << endl;
    cout << "Long Long Int" << " =====> " << sizeof(long long int) << " bytes" << endl;

    return 0;
}
