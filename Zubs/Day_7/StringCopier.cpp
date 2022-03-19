# include <iostream>
# include <string.h>

using namespace std;

int main() {
    char string1[] = "Why will you not love Zubair?";
    char string2[80];

    strncpy(string2, string1, 79);

    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    return 0;
}
