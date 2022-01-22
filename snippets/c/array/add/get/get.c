#include<stdio.h>

int main() {
    int array[] = {1,2,3,4,5};
    int index = 1;
    int item = array[index];
    printf("%d \n", &item);
   return 0;
}