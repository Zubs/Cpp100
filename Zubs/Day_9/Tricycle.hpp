# include <iostream>

using namespace std;

class Tricycle
{
    public:
        Tricycle(int initialSpeed) {
            setSpeed(initialSpeed);
        }

        ~Tricycle() {
            // Do nothing
        };

        int getSpeed() const {
            return speed;
        }

        void setSpeed(int newSpeed) {
            if (newSpeed >= 0) speed = newSpeed;
        }

        void pedal() {
            setSpeed(speed + 5);

            cout << "Moving faster now. Moving at " << speed << "mp/h." << endl;
        }

        void brake() {
            setSpeed(speed - 10);

            cout << "Slowing down. Moving at " << speed << "mp/h." << endl;
        }
    private:
        int speed;
};
