//Array implementation of stack with the example of adding books on a shelf
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


#define SIZE 10

void push(int);
void pop();
void display();


int stack[SIZE], top = -1;

int main()
{
   int value, choice;
   while(1){
      printf("\n\n***BOOK SHELF***\n");
      printf("1. Add Books\n2.Remove Books \n3.Show books\n4. Exit");
      printf("\nChoose one of the following: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the number of books to be added: ");
		 scanf("%d",&value);
		 push(value);
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
void push(int value){ //Function to insert the number of 
   if(top == SIZE-1)
      printf("\nBook shelf is Full! Can't insert anymore'");
   else{
      top++;
      stack[top] = value;
      printf("\nBooks are added!");
   }
}
void pop(){
   if(top == -1)
      printf("\nBook Shelf is Empty!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nBook Shelf is Empty!!!");
   else{
      int i;
      printf("\nThe number of books on the shelf are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}

