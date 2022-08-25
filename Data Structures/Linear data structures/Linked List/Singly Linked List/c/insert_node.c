#include <stdio.h>
#include <stdlib.h>

struct node {
    char value;
    struct node *next;
};
void printnode(struct node *next_node)
{
    
    while(next_node != NULL) {
        printf("%c", next_node->value);
        next_node= next_node->next;
    }
}

int main()
{

    /* Initialize nodes */
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *three = NULL;
    /* Allocate memory */
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    /* Assign data values */
    first->value = 'N';
    second->value = 'G';
    three->value = 'U';
    /* Connect nodes */
    first->next = second;
    second->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = first;

    /*Insert new node at the beginning*/

    //Init and Allocate memory for new node
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    //Store data
    new_node->value = 'Y';
    //Change next of new node to point to head
    new_node->next = head;
    //Change head to point to recently created node
    head = new_node;

    /*Insert at the End*/
    struct node *new_node_end;
    new_node_end = malloc(sizeof(struct node));

    new_node_end->value = 'E';
    /*Traverse a Linked List*/
    struct node *temp = head;
    while(temp->next != NULL){
    temp = temp->next;
    }
    temp->next = new_node_end;



   // heap = first;
    printnode(head);
    printf("\n");
}
