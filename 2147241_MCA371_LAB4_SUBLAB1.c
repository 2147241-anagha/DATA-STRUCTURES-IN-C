#include<stdio.h>
#include<stdlib.h>


struct student{
	int rollno;
	char name[80];
	int marks;
};

int swap;
void selectionSort_array(int[], int);
void quickSort_array(int[],int,int);

void main()
{
	int A[20000],n,ch,i;
	
	do{
		system("cls");
		printf("\n1.Selection Sort");
		printf("\n2.Quick Sort");
		printf("\n3.Exit(Press any other key)\n");
		
		printf("\nEnter your choice -> ");
		scanf("%d",&ch);
		
		srand(time(0));
		
		switch(ch)
		{
			case 1:
					printf("\nEnter number of elements ->");
					scanf("%d",&n);
					
					swap = 0;
					
					for(i=0; i<n; i++)
						A[i] = rand() % 100;
	
					printf("\n");
					
					for(i=0; i<n; i++)
						printf("\t%d",A[i]);
						
					selectionSort_array(A,n);
					printf("\nSwaps ->\t%d",swap);

					
					getch();
					break;
					
			case 2:
					printf("\nEnter number of elements ->");
					scanf("%d",&n);
					
					swap = 0;
					for(i=0; i<n; i++)
						A[i] = rand() % 100;
	
					printf("\n");
					
					for(i=0; i<n; i++)
						printf("\t%d",A[i]);
					
					quickSort_array(A,0,n-1);
	
					printf("\nSorted Array ->\n ");
					printf("\n");
					for(i=0; i<n; i++)
						printf("\t%d",A[i]);
						
					printf("\nSwaps ->\t%d",swap);
					
					getch();
					break;
					
			default:
					exit(1);
							
		}
	}while(1);
}

void selectionSort_array(int arr[], int n)
{
	 int i, j, k,temp;  
      
    for (i=0; i<n; i++)    
    {  
        temp = i; 
          
        for (j=i+1; j<n; j++)  
        {
        	if (arr[j] < arr[temp])  
            	temp = j;  
            	
     	}
	
	printf("\n");
            for(k=0; k<n; k++)
    			printf("\t%d",arr[k]); 
	    int t = arr[temp];  
	    arr[temp] = arr[i];  
	    arr[i] = t;  
	    swap++;
		  
    }  
    
    printf("\nSorted Array ->\n ");
    
    for(i=0; i<n; i++)
    	printf("\t%d",arr[i]);
    
    
}

void quickSort_array(int ar[],int first,int last){
   int i, j, pivot, temp,k;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(ar[i]<=ar[pivot]&&i<last)
            i++;
         while(ar[j]>ar[pivot])
            j--;
         if(i<j){
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
         }
      }

      temp=ar[pivot];
      ar[pivot]=ar[j];
      ar[j]=temp;
      swap++;
      printf("\n");
            for(k=0; k<last+1; k++)
    			printf("\t%d",ar[k]);   
      quickSort_array(ar,first,j-1);
      quickSort_array(ar,j+1,last);

   }
   
   
}
