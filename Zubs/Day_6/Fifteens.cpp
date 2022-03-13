# include <iostream>

using namespace std;

int main() {
    int counter = 0, multiples = 0;

    while (multiples < 19) {
        counter += 1;

        if (counter % 15 != 0) continue;

        cout << counter << endl;
        multiples += 1;
    }

    return 0;
}
