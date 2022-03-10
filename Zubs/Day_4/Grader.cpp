# include <iostream>

using namespace std;

int main() {
    int grade;

    cout << "Enter your grade: " << endl;

    cin >> grade;

    if (grade >= 70) cout << "You're a smart one. Congratulations" << endl;
    else cout << "You did your best though. And that's what matters. Try again next time" << endl;

    return 0;
}
