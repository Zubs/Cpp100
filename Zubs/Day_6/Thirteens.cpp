# include <iostream>

using namespace std;

int main() {
    int counter = 0;

    while (counter < 500) {
        counter += 1;

        if (counter % 13 == 0) cout << counter << endl;
    }

    return 0;
}
