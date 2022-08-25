/* C program to Implement a stack using singly linked list. */
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *top;

void push(int data)
{
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    if (!temp)
    {
        printf("stack overflow");
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}

int isEmpty()
{
    return top == NULL;
}

void pop()
{
    struct Node *temp;
    if (isEmpty())
    {
        printf("stack underflow");
        exit(1);
    }
    else
    {
        temp = top;
        top = top->link;
        free(temp);
    }
}
int peek()
{
    if (!isEmpty())
    {
        return top->data;
    }
    else
        exit(1);
}

void display()
{
    struct Node *temp;
    if (isEmpty())
    {
        printf("stack underflow");
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}

int main()
{
    push(3);
    push(236);
    push(15);

    display();

    pop();
    printf("\n stack after pop ");

    display();
    printf("\ngettop ");
    peek();
}