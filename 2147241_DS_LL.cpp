#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}

*tos,*tos1,*temp;
 
void push(int data);
void pop();
void empty();
void display();
int peek();


 
int count = 0;
 
int main()
{
    int num, ch, ele;
 
    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Display");
 
  
 
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (tos == NULL)
                printf("No elements in stack");
            else
            {
                ele = peek();
                printf("\n Top element : %d", ele);
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
/* Push data into stack */
void push(int data)
{
    if (tos == NULL)
    {
        tos =(struct node *)malloc(1*sizeof(struct node));
        tos->ptr = NULL;
        tos->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = tos;
        temp->info = data;
        tos = temp;
    }
    count++;
}
 
void display()
{
    tos1 = tos;
 
    if (tos1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (tos1 != NULL)
    {
        printf("%d ", tos1->info);
        tos1 = tos1->ptr;
    }
 }
 
void pop()
{
    tos1 = tos;
 
    if (tos1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        tos1 = tos1->ptr;
    printf("\n Popped value : %d", tos->info);
    free(tos);
    tos = tos1;
    count--;
}
 
int peek()
{
    return(tos->info);
}
 
void empty()
{
    if (tos == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}
 
