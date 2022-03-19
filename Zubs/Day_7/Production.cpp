# include <iostream>

using namespace std;

int main() {
    int production_years[] = {
            2001, 2003, 2007, 2011, 2019
    };

    for (int year: production_years) {
        cout << "Year: " << year << endl;
    }

    return 0;
}
