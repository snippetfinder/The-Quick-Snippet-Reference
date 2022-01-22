#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main() {
    int array[] = { 5, 4, 3, 2, 1 };

    ostringstream stream;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        if (i) stream << "-";
        stream << array[i];
    }
    string joined1 = stream.str();

    cout << joined1 << endl;
}