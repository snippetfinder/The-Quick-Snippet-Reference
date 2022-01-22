#include<iostream>
#include<vector>

using namespace std;

int main() {
   int array[] = {1, 2, 3};
   cout << sizeof(array) / sizeof(array[0]) << endl; // 3
   return 0;
}