#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_node(int data)
{
    /*NOTE: For this  implementation you shall use pointers to "static"*/
    static struct node *head = NULL, *newNode, *temp;
    /*Init node*/
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    /*Link from previus node to new node*/
    if (head == NULL)
    {
        head = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = newNode;
    }

    return head;
}

void print_linked_list(struct node **phead)
{
    struct node *temp = *phead;
    printf("Head = %x\n", temp);
    printf("    |\n");
    while (temp != NULL)
    {
        printf("| %d | %x |\n", temp->data, temp->next);
        temp = temp->next;
    }
}

int main(void)
{
    struct node *head;
    for (int i = 1; i < 5; i++)
    {
        head = create_node(i);
    }
    print_linked_list(&head);

    return 0;
}
