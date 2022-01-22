#include<iostream>
#include<vector>

using namespace std;

int main() {
   int array[] = {3, 2, 1};

    cout<<"before inserting"<<endl;
    for (int i = sizeof(array) / sizeof(array[0])-1; i >= 0; i--) {
        cout << array[i];
    }
    cout << endl;
    int item = 100;
    int index = 1;
    array[index] = item;

    cout<<"after inserting"<<endl;
    for (int i = sizeof(array) / sizeof(array[0])-1; i >= 0; i--) {
        cout << array[i];
    }
    cout << endl;
   return 0;
}