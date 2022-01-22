#include<stdio.h>
#include <string.h>

int main() {
    int array[] = {1,2,3,4,5};
    memset(array, 0, sizeof(array));
    for(int i=0;i<5;i++){
        printf("%d \n", array[i]);
    } 
   return 0;
}