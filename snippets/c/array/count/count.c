#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int array[] = {1,2,3,4,5};
	int arraySize = sizeof(array)/ sizeof(array[0]);
	printf("%d", arraySize);
	return 0;
}
