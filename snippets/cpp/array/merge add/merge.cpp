#include<iostream>
#include<vector>

using namespace std;

int main() {
   int array1[] = {3, 2, 1};
   int array2[] = {100, 200, 300};

   int arraySize1 = sizeof(array1)/sizeof(array1[0]);
   int arraySize2 = sizeof(array2)/sizeof(array2[0]);

   int c[arraySize1 + arraySize2];

   for(int i=0;i<arraySize1;i++)
    {
        c[i]=array1[i];
    }


    for(int i=0;i<arraySize2;i++)
    {
        c[i + arraySize1]=array2[i];
    }

    for (int i = 0; i < (arraySize1  + arraySize2); i++) {
        cout << c[i] << " ";
    }

   
   return 0;
}