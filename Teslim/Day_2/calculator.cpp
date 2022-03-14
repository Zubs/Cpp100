#include <iostream>
using namespace std;
int add(int x,int y)
{
    // Add two numbers x and y and return the sum
    cout<< "Running Calculator..."<<endl;
    return(x+y);
}
int main () {
    // This program adds two functions and display the number using the
    // add() function and the return function respectively
    cout<< "What is the sum of 1000 + 2000"<<endl;
    cout<< "The sum is "<<add(1000,2000)<<endl;
    cout<< "What is the sum of 789 + 987"<<endl;
    cout<< "The sum is "<<add(789,987)<<endl;
    return 0;


}