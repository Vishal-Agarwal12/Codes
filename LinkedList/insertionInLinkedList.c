#include <stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node* next;
};
void createList(struct node* head,int n){
    int val;
    struct node* head2=head;
    printf("Enter the element of a linked list:\n");
    	for(int i=0;i<n;i++){
	    scanf("%d",&val);
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
         ptr->data=val;
        ptr->next=NULL;
        head=head2;
        while(head->next!=NULL){
                head=head->next;
        }
        head->next=ptr;
    	}
}
void traverse(struct node* ptr){
    printf("Elements of the linked list are:\n");
        while(ptr!=NULL){
                printf("%d ",ptr->data);
                ptr=ptr->next;
        
		}
	}
struct node* insertAtBeginning(struct node* head){
    printf("Enter the data to be insert at begining :\n");
    int val;
    scanf("%d",&val);
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=head;
    return ptr;
}

void insertAtEnd(struct node* head){
     printf("\nEnter the data to be insert at end :\n");
    int val;
    scanf("%d",&val);
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=ptr;
}
void insertBeforeNode(struct node* head){
     printf("\nEnter the position of Node Before which you have to insert the data and Enter its Data:\n");
    int val,pos;
    scanf("%d %d",&pos,&val);
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    int i=1;
    while(i!=pos-1){
        i++;
        head=head->next;
    }
    ptr->next=head->next;
    head->next=ptr;
}
void insertAfterNode(struct node* head){
     printf("\nEnter the position of Node After which you have to insert the data and Enter its Data:\n");
    int val,pos;
    scanf("%d %d",&pos,&val);
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    int i=1;
    while(i!=pos){
        i++;
        head=head->next;
    }
    ptr->next=head->next;
    head->next=ptr;
}


   
int main(void) {
	
	struct node* head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->next=NULL;
	int n,val;
	printf("\nEnter the size of linked list:\n");
	scanf("%d",&n);
	createList(head,n);
	head=head->next;
	head=insertAtBeginning(head);
		traverse(head);
    insertAtEnd(head);
	traverse(head);
    insertBeforeNode(head);
	traverse(head);
    insertAfterNode(head);
    traverse(head);

	return 0;
}

