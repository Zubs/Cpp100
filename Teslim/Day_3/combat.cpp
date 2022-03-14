#include <iostream>
using namespace std;
int main() 
{
    // define character value
    auto strength = 80;
    auto accuracy = 45.5;
    auto dexterity = 24.0;

    // define constants
    const auto MAXIMUM = 50;

    // calculate combat attack state
    auto attack = strength * (accuracy/ MAXIMUM);
    auto damage = strength * (dexterity/ MAXIMUM);
    cout<<" Attack Rating: "<< attack <<endl;
    cout<<" Damage Rating "<< damage <<endl;
    return 0;



}