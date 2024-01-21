#include <stdio.h>
#include <stdlib.h>

// creating the node of a singly linked list
struct node{
    int data;
    struct node *link;
};

// Function to count the number of nodes in the linked list
void count_nodes(struct node *head) {
    int count = 0;
    if (head == NULL)
        printf("LINKED LIST IS EMPTY");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        count++;
        printf("%d", ptr->data);
        ptr = ptr->link;

    }
    // printf("%d", count);
}

void insert_end(struct node *head, int data){
    {
    struct  node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    };
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;
    
    // creating the second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    // update the link of the head to point to the address of the second node
    head->link = current;
    // creating the third node
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;
    // Call the count_nodes function to print the count
    insert_end(head, 687);
    count_nodes(head);

    // printf("%d", head->data);

    return 0;

}


