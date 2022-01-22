#include <iostream>
#include <algorithm>
using namespace std;


void reverse(int array[], int arraySize) {
    reverse(array, array + arraySize);
}
 
int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int arraySize = sizeof(array)/sizeof(array[0]);
    reverse(array, arraySize);
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
 
    return 0;
}
