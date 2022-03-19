#include <iostream>
using namespace std;
int main()
{
    enum Directions {
        North,
        Northeast,
        East,
        Southeast,
        South,
        Southwest,
        West,
        Northwest
    };
    // Create a variable to hold it
    Directions heading;
    // Give variable a value
    heading = Southeast;
    cout<<" Moving "<< heading <<endl;
    return 0;

}

