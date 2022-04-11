#include <stdio.h>

int count=0; 

void swap(int *a, int *b) {
  int temp = *a;
  count++;
  *a = *b;
  count++;
  *b = temp;
  count++;
}

void selectionSort(int array[], int size) {
	int i, step;
	printf("\nBefore Sorting:\n");
	for (i = 0; i < size; i++)
    printf("%d ", array[i]);
	for (step = 0; step < size - 1; step++){
		count++;
    	int min = step;
    	count++;
    	for (i = step + 1; i < size; i++){
    		count++;
    		if (array[i] < array[min]){
       			min = i;
       			count++;
       			count++;
       		}
    }
    swap(&array[min], &array[step]);
    count++;

  }
	printf("\n\nCOUNT : %d\n\n", count);
	count = 0;
}

void printArray(int array[], int size) {
  int i;
  printf("\nSorted Array \n");
  for (i = 0; i < size; ++i){
	printf("%d ", array[i]);
  }
  printf("\n");
}



