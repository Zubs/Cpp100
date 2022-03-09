# include <iostream>

using namespace std;

/**
 * Adds two numbers together using ancient black magic
 * @param x First number to be added
 * @param y Second number to be added
 * @return The sum of both numbers
 */
int add (int x, int y) {

    // Display some vibe-driven message to seem like you're serious
    cout << "Adding..." << endl;

    return x + y;
}

int main () {
    cout << "What is 1234 + 567?" << endl;
    cout << add(1234, 567) << endl;

    cout << "What is 8901 + 2345?" << endl;
    cout << add(8901, 2345) << endl;

    return 0;
}
