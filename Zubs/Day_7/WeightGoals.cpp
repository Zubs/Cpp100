# include <iostream>

using namespace std;

int main() {
    float goals[] = { 0.9, 0.75, 0.5, 0.25 };
    float weight, target;

    cout << "Enter current weight: ";
    cin >> weight;

    cout << "Enter weight goal: ";
    cin >> target;

    for (int i = 0; i < 4; i++) {
        float loss = (weight - target) * goals[i];
        cout << "Goal " << i + 1 << ": " << target + loss << endl;
    }

    return 0;
}
