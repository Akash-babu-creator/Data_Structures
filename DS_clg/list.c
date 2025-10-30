#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node*prev;
    struct Node*next;
};
int main()
{
    struct Node*head = NULL;
    struct Node*newnode2;
    struct Node*temp;
    // insert first node at begning
    newnode2 = (struct Node*)malloc(sizeof(struct Node));
    newnode2->data= 10;
    newnode2->prev= NULL;
    newnode2->next= head;
    head = newnode2;
    //insert second node at begning
    struct Node*newnode1;
    newnode1 = (struct Node*)malloc(sizeof(struct Node));
    newnode1->data= 20;
    newnode1->prev= NULL;
    newnode1->next= head;
    head = newnode1;
    //insert 3rd node at the beging
    struct Node* newnode3 = (struct Node*)malloc(sizeof(struct Node));
    newnode3->data= 30;
    newnode3->prev= NULL;
    newnode3->next= head;
    
    head = newnode3;
    printf("doubly linked list after inserting at the begning");
    temp = head;
    while (temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("\n");

    return 0;
}

