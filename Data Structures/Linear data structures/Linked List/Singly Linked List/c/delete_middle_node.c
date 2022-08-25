#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void print_node(struct node *next_item)
{
    while(next_item != NULL) {
        printf("%d  ", next_item->data);
        next_item = next_item->next;
    }
}

int main()
{
    /* Initialize nodes */
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *three = NULL;
    struct node *four = NULL;
    struct node *five = NULL;
    struct node *six = NULL;

    /* Allocate memory */
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));
    five = malloc(sizeof(struct node));
    six = malloc(sizeof(struct node));

    /* Assign data values */
    first->data = 1;
    second->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;
    six->data = 6;

    /* Connect nodes */
    first->next = second;
    second->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    /* Save address of first node in head */
    head = first;


    struct node *temp = head;

    for(int i=2; i < 4; i++) {
        if(temp->next != NULL) {
            temp = temp->next;
        }
    }

    temp->next = temp->next->next;


    print_node(head);
}
