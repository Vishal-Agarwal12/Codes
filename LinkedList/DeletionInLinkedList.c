#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_creation(struct node *head, int n)
{
    int val;
    struct node *head2 = head;
    printf("Enter the element of a linked list:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
//        if (isFull(head))
//        {
//            printf("STACK UNDERFLOW\n");
//            return;
//        }
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = val;
        ptr->next = NULL;
        head = head2;
        while (head->next != NULL)
        {
            head = head->next;
        }
        head->next = ptr;
    }
}
void traverse(struct node *ptr)
{
    printf("\nElements of the linked list are:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deleteAtBeginning(struct node *head)
{
    printf("After deleting fist Node :");

    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

void deleteAtEnd(struct node *head)
{
printf("\nAfter deleting Last Node :");
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    free(head->next->next);
    head->next = NULL;
}
void deleteBeforeANode(struct node *head)
{

    printf("\nEnter the position of deletion of node, before the node:\n");
    int pos;
    scanf("%d", &pos);
    int i = 1;
    while (i != pos - 2)
    {
        i++;
        head = head->next;
    }
    struct node *ptr;
    ptr = head->next->next;
    head->next = ptr;
}
void deleteAfterANode(struct node *head)
{

    printf("\nEnter the position of deletion of node, after the node:\n");
    int pos;
    scanf("%d", &pos);
    int i = 1;
    while (i != pos)
    {
        i++;
        head = head->next;
    }
    struct node *ptr;
    ptr = head->next->next;
    head->next = ptr;
}

int main(void)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    int n, val;
    printf("Enter the size of linked list:\n");
    scanf("%d", &n);
    linkedlist_creation(head, n);
    head = head->next;
    //head=insertion_atbegin(head);
    // traversal(head);
    //insertion_atend(head);
    //traversal(head);
    //insertion_beforeNode(head);
    //traversal(head);
    //insertion_afterNode(head);
    //traversal(head);
    head = deleteAtBeginning(head);
    traverse(head);
    
    deleteBeforeANode(head);
    traverse(head);
    deleteAfterANode(head);
    traverse(head);
deleteAtEnd(head);
    traverse(head);
    //searching(head);
    return 0;
}