#include<stdio.h>


void print(int array[],int n) {
   for(int i=0; i < n; i++){
        printf("%d", array[i]);
   }
   printf("\n");
   
}

int main() {
    int arraySize = 10;
    int array[arraySize];
    array[0] = 3;
    array[1] = 2;
    int item = 1;
    int size = sizeof array / sizeof array[0];
    printf("before adding : \n");
    print(array, arraySize);
    array[size] = item;
    printf( "after adding element : ");
    print(array, arraySize);
   return 0;
}