#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int array[] = {1,2,3,4,5};
	int arraySize = sizeof(array)/ sizeof(array[0]);
    int item = 4;
    int index = -1;
    for(int i = 0; i< arraySize; i++){
        if (array[i] == item){
            index = i;
            break;
        }
    }
	printf("%d", index);
	return 0;
}
