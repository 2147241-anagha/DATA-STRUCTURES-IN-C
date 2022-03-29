#include<stdio.h>   
#include<stdlib.h>  
struct fruitbasket   
{  
    int data;   
    struct fruitbasket *next;  
};  
struct fruitbasket *front;  
struct fruitbasket *rear;   
void insert();  
void delete();  
void display();  
int main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\nFRUIT BASKET\n");  
        printf("\n=================================================================\n");  
        printf("\n1.add a set of fruit\n2.Delete a set of fruit\n3.Display the number of sets of fruits\n4.Exit\n");  
        printf("\nChoose a number from the above?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nChoose one:\n");  
        }  
    }  
}  
void insert()  
{  
    struct fruitbasket *ptr;  
    int item;   
      
    ptr = (struct fruitbasket *) malloc (sizeof(struct fruitbasket));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter a set\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}     
void delete ()  
{  
    struct fruitbasket *ptr;  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
}  
void display()  
{  
    struct fruitbasket *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nSorry, the basket is empty\n");  
    }  
    else  
    {   printf("\nDisplaying the set of fruits\n");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}  
