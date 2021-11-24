#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int isempty(struct node *ptr)
{
    if (ptr == NULL)
        return 1;

    return 0;
}
int isFull(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
        return 1;

    return 0;
}
void createList(struct node *head, int n)
{
    int val;
    struct node *head2 = head;
    printf("enter the element of a linked list:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (isFull(head))
        {
            printf("STACK UNDERFLOW\n");
            return;
        }
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
    printf("Elements of the linked list are:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void searching(struct node *head)
{
    int val, pos = 0;
    printf("\nenter the key value that is to be searched:\n");
    scanf("%d", &val);
    while (head->next != NULL)
    {
        pos++;
        if (head->data == val)
        {
            printf("element %d is found at position %d", val, pos);
            return;
        }
        head = head->next;
    }
    printf("element %d not found", val);
}
struct node *insertion_atbegin(struct node *head)
{
    printf("\nEnter the data to be insert at begining :\n");
    int val;
    scanf("%d", &val);
    if (isFull(head))
    {
        printf("STACK UNDERFLOW\n");
        return head;
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = val;
        ptr->next = head;
        return ptr;
    }
}
void insertion_beforeNode(struct node *head)
{
    printf("\nEnter the data to be inserted before the node and its position:\n");
    int val, pos;
    scanf("%d %d", &val, &pos);
    if (isFull(head))
    {
        printf("STACK UNDERFLOW\n");
        return;
    }
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    int i = 1;
    while (i != pos - 1)
    {
        i++;
        head = head->next;
    }
    ptr->next = head->next;
    head->next = ptr;
}
void insertion_afterNode(struct node *head)
{
    printf("\nEnter the data to be inserted after the node and its position:\n");
    int val, pos;
    scanf("%d %d", &val, &pos);
    if (isFull(head))
    {
        printf("STACK UNDERFLOW\n");
        return;
    }
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    int i = 1;
    while (i != pos)
    {
        i++;
        head = head->next;
    }
    ptr->next = head->next;
    head->next = ptr;
}
void insertion_atend(struct node *head)
{
    printf("\nEnter the data to be insert at end :\n");
    int val;
    scanf("%d", &val);
    if (isFull(head))
    {
        printf("STACK UNDERFLOW\n");
        return;
    }
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = ptr;
}
struct node *deletion_atbegin(struct node *head)
{
    printf("After deleting fist Node :");
    if (isempty(head))
    {
        printf("STACK UNDERFLOW");
        return head;
    }

    else
    {
        struct node *ptr;
        ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
}
void deletion_beforeNode(struct node *head)
{
    if (isempty(head))
    {
        printf("STACK UNDERFLOW");
    }
    printf("\nenter the position of deletion of node, before the node:\n");
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
void deletion_afterNode(struct node *head)
{
    if (isempty(head))
    {
        printf("STACK UNDERFLOW");
    }
    printf("\nenter the position of deletion of node, after the node:\n");
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
void deletion_atEnd(struct node *head)
{
    if (isempty(head))
    {
        printf("STACK UNDERFLOW");
    }
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    free(head->next->next);
    head->next = NULL;
}
int main(void)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    int n, val;
    printf("enter the size of linked list:\n");
    scanf("%d", &n);
    createList(head, n);
    head = head->next;
    //head=insertion_atbegin(head);
    // traversal(head);
    //insertion_atend(head);
    //traversal(head);
    //insertion_beforeNode(head);
    //traversal(head);
    //insertion_afterNode(head);
    //traversal(head);
    // head=deletion_atbegin(head);
    // traversal(head);
    // deletion_beforeNode(head);
    // traversal(head);
    // deletion_afterNode(head);
    // traversal(head);
    // deletion_atEnd(head);
    traverse(head);
    searching(head);
    return 0;
}