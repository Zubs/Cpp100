# include <iostream>

using namespace std;

int main() {
    char name[50], quest[80], velocity[80];

    cout << "What is your name? ";
    cin.getline(name, 49);

    cout << "What is your quest? ";
    cin.getline(quest, 79);

    cout << "What is the velocity of an unladen swallow? ";
    cin.getline(velocity, 79);

    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Quest: " << quest << endl;
    cout << "Velocity: " << velocity << endl;

    return 0;
}
