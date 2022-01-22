#include<stdio.h>

int main() {
    int sourceArray[] = { 5, 4, 3, 2, 1};
    int destinationArray[] = { 85, 40, 13, 2, 91};
    int destinationIndex = 2;
    int sourceStart = 1;
    int count = 3;


    int arraySize = sizeof(sourceArray)/sizeof(sourceArray[0]);

    int en = sourceStart + ( arraySize - (sourceStart + count));

    int remainingArray[en];
    int cutArray[count];

    int a = 0;
    int b = 0;
    for(int i=0;i<arraySize;i++){
        if(i >= sourceStart && i < (sourceStart+count)){
            cutArray[a] = sourceArray[i];
            a = a + 1;
        }else{
            remainingArray[b] = sourceArray[i];
            b = b + 1;
        }
    }

    printf("array 1 %d\n");
    for(int i=0;i<a;i++){
        printf("%d\n",cutArray[i]);
    }

    printf("array 2 %d\n");
    for(int i=0;i<b;i++){
        printf("%d\n",remainingArray[i]);
    }

   return 0;
}