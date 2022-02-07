#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int number() {
    return 10;
}

double decimal() {
    return 2.3;
}

string _string() {
    return "Hello there.";
}

int *array(int arr[]) {
    return arr;
}

string dictionary() {
    return "Hello there.";
}

int main() {
    cout << _string();  // Hello there. 
    return 0;
}