//Array implementation of stack with the example of adding books on a shelf
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define N 10

int S[N], topofstack = -1;

void push(int);
void pop();
void display();

void push(int item){ 
   if(topofstack == N-1)
      printf("\nBook shelf is Full! Can't insert anymore'");
   else{
      topofstack++;
      S[topofstack] = item;
      printf("\nBooks are added!");
   }
}
void pop(){
   if(topofstack == -1)
      printf("\nBook Shelf is Empty!");
   else{
      printf("\nDeleted : %d", S[topofstack]);
      topofstack--;
   }
}
void display(){
   if(topofstack == -1)
      printf("\nBook Shelf is Empty!!!");
   else{
      int i;
      printf("\nThe number of books on the shelf are:\n");
      for(i=topofstack; i>=0; i--)
	 printf("%d\n",S[i]);
   }
}

int main()
{
   int item, choice;
   while(1){
      printf("\n\n***BOOK SHELF***\n");
      printf("1. Add Books\n2.Remove Books \n3.Show books\n4. Exit");
      printf("\nChoose one of the following: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the number of books to be added: ");
		 scanf("%d",&item);
		 push(item);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 
	 default: printf("\nTry again!");
      }
   }
}

