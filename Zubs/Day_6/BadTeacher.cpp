# include <iostream>

using namespace std;

int main() {
    char grade;

    cout << "What was your last grade? (ABCDF) ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Wonderful." << endl;
            break;
        case 'B':
            cout << "Great." << endl;
            break;
        case 'C':
            cout << "You passed. Luckily." << endl;
            break;
        case 'D':
            cout << "You should have put in more effort." << endl;
            break;
        case 'F':
            cout << "You failed again. You failure." << endl;
            break;
        default:
            cout << "You don't even know what a grade is? Sad." << endl;
            break;
    }

    return 0;
}
