#include <iostream>

int main()
{
    const int TOUCHDOWN = 6;
    const int FIELDGOAL = 3;
    const int SAFETY = 2;
    const int POINT = 1;

    int c_panthers = 0;
    int c_saints = 0;

    c_panthers = TOUCHDOWN + FIELDGOAL + SAFETY + POINT;
    c_saints = TOUCHDOWN + FIELDGOAL + SAFETY;

    std::cout << "Panthers: " << c_panthers << std::endl;
    std::cout << "Saints: " << c_saints << std::endl;

    std::cout << "Panthers win!!!!" << std::endl;
    return 0;
}