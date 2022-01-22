#include<stdio.h>

int main() {
    int array[] = {1,2,3,4,5};
    int index = 1;
    int item = 100;
    array[index] = item;
    for(int i=0;i<5;i++){
        printf("%d \n", array[i]);
    } 
   return 0;
}