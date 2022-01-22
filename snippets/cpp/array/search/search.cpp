#include <iostream>
using namespace std;

int find(int array[], int arraySize, int seek)
{
    for (int i = 0; i < arraySize; ++i)
    {
        if (array[i] == seek) return i;
    }
    return -1;
}
int main()
{
    int array[ 5 ] = { 5, 4, 3, 2, 1 };
    int x = find(array,5,4);
    cout << x << endl;    
}