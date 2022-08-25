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

    /*Delete first node*/

    head = head->next;

    /*delete end node*/
    /*Traverse a Linked List*/
    struct node *temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;


    // print all value node
    printnode(head);
}
