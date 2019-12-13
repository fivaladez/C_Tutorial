#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    struct node *head, *newNode, *temp;
    head = NULL;
    int choice;

    while(choice)
    {
        /*Create a new node and Initialize it*/
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter a numeric value: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        /*Link Nodes*/
        if(head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to continue(0, 1)? ");
        scanf("%d", &choice);
    }
    /*Print data in Nodes*/
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
