#include <stdio.h>
#include <stdlib.h>

int stack[10];
int maxsize = 10;
int top;

int isFull()
{
    return top == maxsize;
}
int isEmpty()
{
    return top == -1;
}
void push(int data)
{
    if (isFull())
    {
        printf("stac overflow");
        exit(1);
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
int pop()
{
    int data;
    if (isEmpty())
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        stack[top] = data;
        top = top - 1;
        return data;
    }
}
void peek()
{
    if (!isEmpty())
    {
        printf("\n%d\n", stack[top]);
    }
    else
    {
        printf("stack is Empty\n");
        exit(1);
    }
}

void display()
{
    int i = 0;
    while (i <= top)
    {
        printf("%d ", stack[i]);
        i++;
    }
}

int main()
{
    // peek();
    // pop();
    push(6);
    push(15);
    push(1);
    push(23);
    push(3);
    push(11);

    //  display();

    // pop();
    // pop();
    // printf("\n");
    // display();
    peek();
}
