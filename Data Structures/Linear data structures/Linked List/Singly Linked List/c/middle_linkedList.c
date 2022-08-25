#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int main()
{
    /* Initialize nodes */
    struct ListNode *head;
    struct ListNode *one = NULL;
    struct ListNode *two = NULL;
    struct ListNode *three = NULL;
    struct ListNode *four = NULL;
    struct ListNode *five = NULL;

    /* Allocate memory */
    one = malloc(sizeof(struct ListNode));
    two = malloc(sizeof(struct ListNode));
    three = malloc(sizeof(struct ListNode));
    four = malloc(sizeof(struct ListNode));
    five = malloc(sizeof(struct ListNode));

    /* Assign data values */
    one->val = 1;
    two->val = 2;
    three->val = 3;
    four->val = 4;
    five->val = 5;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    /* Save address of first node in head */
    head = one;

    struct ListNode *temp1 = head;
    struct ListNode *temp2 = head;
// runner technique
    while(temp1->next != NULL) {
        temp2 = temp2->next;
        temp1 = temp1->next->next;
    }

    printf("middle of linked List is: %d",temp2->val);
}
