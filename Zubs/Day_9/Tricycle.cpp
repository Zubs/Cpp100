# include "Tricycle.hpp"

using namespace std;

int main() {
    Tricycle mySecondBike(40);
    mySecondBike.pedal();
    mySecondBike.pedal();
    mySecondBike.pedal();
    mySecondBike.pedal();
    mySecondBike.brake();
    mySecondBike.brake();

    return 0;
}
