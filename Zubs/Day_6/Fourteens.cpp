# include <iostream>

using namespace std;

int main() {
    int counter = 0, multiples = 0;

    while (true) {
        counter += 1;

        if (counter % 14 == 0) {
            cout << counter << endl;
            multiples += 1;
        }

        if (multiples > 19) break;
    }

    return 0;
}
