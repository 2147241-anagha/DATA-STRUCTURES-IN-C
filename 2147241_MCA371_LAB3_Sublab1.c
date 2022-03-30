#include<stdio.h>  
#include<stdlib.h>  
struct train   
{  
    int data;  
    struct train *next;   
};  
struct train *head;  
  
  
void add_comp ();  
void delete_comp();  
void show();   
void main ()  
{  
    int choice =0;  
    while(choice != 4)   
    {  
        printf("\n\n*********TRAIN COMPARTMENTS USING LINKED LIST*********\n");  
        printf("\nChoose one option\n");  
        printf("\n===============================================\n");  
        printf("\n1.Add a compartment to the train\n2.Delete a compartment from the train\n3.Show Compartments\n4.Exit\n");  
        printf("\nEnter one of the above?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            add_comp();         
            break;  
            case 2:  
            delete_comp();       
            break;      
            case 3:  
            show();        
            break;  
            case 4:  
            exit(0);  
            break;  
            default:  
            printf("Please enter:");  
        }  
    }  
} 
void add_comp()  
{  
    struct train *ptr,*temp;  
    int item;     
    ptr = (struct train*)malloc(sizeof(struct train));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nCompartment added");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nCompartment added to the train");  
          
        }  
    }  
}  
void delete_comp()  
{  
    struct train *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nCompartment removed from the train\n");  
    }  
}  
void show()  
{  
    struct train *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\n----------------printing values of compartments----------------\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
