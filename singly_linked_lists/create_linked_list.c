#include <stdio.h>
#include <stdlib.h>

// creating the node of a singly linked list
struct node{
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 50;
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
    return 0;
}


