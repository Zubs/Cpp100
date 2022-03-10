# include <iostream>

using namespace std;

int main() {
    // Using an ENUM
    enum Direction {
        North,
        NorthEast,
        East,
        SouthEast,
        South,
        SouthWest,
        West,
        NorthWest
    };

    Direction user_direction = North;

    cout << "User going towards " << North << " direction." << endl;

    return 0;
}
