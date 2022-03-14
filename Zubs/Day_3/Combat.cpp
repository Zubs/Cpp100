# include <iostream>

using namespace std;

int main() {
    auto strength = 80;
    auto accuracy = 45.5, dexterity = 24.0;

    const auto MAXIMUM = 50;

    auto attack = strength * (accuracy / MAXIMUM);
    auto damage = strength * (dexterity / MAXIMUM);

    cout << "Attack rating: " << attack << endl;
    cout << "Damage rating: " << damage << endl;

    return 0;
}
