# include <iostream>

using namespace std;

class Tricycle
{
    public:
        Tricycle(int initialSpeed);
        ~Tricycle();
        int getSpeed();
        void setSpeed(int speed);
        void pedal();
        void brake();
    private:
        int speed;
};

Tricycle::Tricycle(int initialSpeed) {
    setSpeed(initialSpeed);
}

Tricycle::~Tricycle() {
    // Do nothing here
}

int Tricycle::getSpeed() {
    return speed;
}

void Tricycle::setSpeed(int newSpeed) {
    if (newSpeed >= 0) speed = newSpeed;
}

void Tricycle::pedal() {
    setSpeed(speed + 1);

    cout << "Pedalling faster now. Moving at " << speed << "mp/h." << endl;
}

void Tricycle::brake() {
    setSpeed(speed - 1);

    cout << "Stopped moving." << endl;
}

int main() {
    Tricycle mybike(45);
    mybike.pedal();
    mybike.pedal();
    mybike.pedal();
    mybike.brake();

    return 0;
}
