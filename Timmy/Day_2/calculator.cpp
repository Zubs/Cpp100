#include <iostream>

int add(int x, int y, int z)
{
    return x + y + z;
}

int main () {
    std::cout << "Simple calculator" << std::endl;
    std::cout << "Sum of 2,3 and 4: " << add(2,3,4) << std::endl;
    std::cout << "Sum of 11,12 and 13: " << add(11,12,13) << std::endl;

    return 0;
}