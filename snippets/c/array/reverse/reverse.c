#include <stdio.h>
#define MAX_SIZE 100      // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, arrIndex, revIndex;
    int temp; // Used for swapping 

    int array[] = {1,2,3,4,5};
    size = 5;

    


    revIndex = 0;
    arrIndex = size - 1;
    while(revIndex < arrIndex)
    {
        /* Copy value from original array to reverse array */
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;
        
        revIndex++;
        arrIndex--;
    }

    /*
     * Print reversed array
     */
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}