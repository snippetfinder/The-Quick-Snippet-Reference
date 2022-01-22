#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap (int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print (int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
		printf("%d ", array[i]);
	printf("\n");
}

void shuffle ( int array[], int arraySize )
{
	srand ( time(NULL) );
	for (int i = arraySize-1; i > 0; i--)
	{
		int j = rand() % (i+1);
		swap(&array[i], &array[j]);
	}
}

int main()
{
	int array[] = {1,2,3,4,5};
	int arraySize = sizeof(array)/ sizeof(array[0]);
	shuffle (array, arraySize);
	print(array, arraySize);
	return 0;
}
