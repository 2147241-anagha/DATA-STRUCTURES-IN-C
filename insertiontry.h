#include<stdio.h>
  
int i,j,temp, count1 = 0;


void insertionSort(int array[], int size){
	printf("\nBefore Sorting:\n");
	for (i = 0; i < size; i++)
    	printf("%d ", array[i]);
    	
    	
	for(i = 1; i <= size - 1; i++){
		count1++;
      	for(j=i; j > 0 && array[j - 1] > array[j]; j--){
			count1++;
			temp = array[j];
			count1++;
        	array[j] = array[j - 1];
        	count1++;
			array[j - 1] = temp;
			count1++;
      	}
   	}
   	
   	
	printf("\n\nCOUNT : %d\n\n", count1);
	count1 = 0;
}



