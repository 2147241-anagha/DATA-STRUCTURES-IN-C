#include"selectiontry.h"
#include"insertiontry.h"
#include<stdlib.h>

void unsort(int array[]){
	int i, size=10;
	int array1[10] = {15,22,33,64,52,16,67,81,99,10};
	for(i=0;i<=size;i++)
		array[i]=array1[i];
	printf("\n------Unsorted-----\n");
}

int main(){
	int size = 10;
	int array[10] = {15,22,33,64,52,16,67,81,99,10};
	int choice;
	printf("-------------------------------\n");      
	while(choice)   
    {      
        printf("\n*****Comparing Sorting*****\n1.Selection Sort\n2.Insertion Sort\n3.Unsort\n4.Exit");  
        printf("\nEnter your choice : ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            selectionSort(array, size);
			printArray(array, size);  
            break;  
            case 2:
            insertionSort(array, size);
			printArray(array, size);  
            break; 
			case 3:
			unsort(array);
			break;
			case 4:
			exit(0);
			break;  
            default:   
            printf("\nEnter valid choice. . . .\n");  
            break;
        }  
    }  
}


