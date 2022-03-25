#include <iostream>
using namespace std;
int main () {
    int grade;
    cout<<" Input your grade (1-100): ";
    cin>> grade;
    if (grade >= 70)
    cout << "Congratulations you passed"<<endl;
    else 
    cout << " Try again. Love the process"<<endl;

    return 0;   
}