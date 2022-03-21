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
 
    printf("\n 1 - Add Books");
    printf("\n 2 - Remove Books");
    printf("\n 3 - Check book on top");
    printf("\n 4 - Check for empty shelf");
    printf("\n 5 - Exit");
    printf("\n 6 - Display books");
 
  
 
    while (1)
    {
        printf("\n Enter your choice : ");
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
                printf("No books on shelf");
            else
            {
                ele = peek();
                printf("\n Top book on shelf : %d", ele);
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
            printf(" Try again!  ");
            break;
        }
    }
}
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
        printf("Book shelf is empty");
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
        printf("\n Error : book shelf is empty");
        return;
    }
    else
        tos1 = tos1->ptr;
    printf("\n Popped books : %d", tos->info);
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
        printf("\n Book shelf is empty");
    else
        printf("\n Book shelf is not empty", count);
}
 
