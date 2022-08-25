/* C program to Implement a stack using array. */
#include <stdio.h>
#include <stdlib.h>
int top;
int stackArray[100];

void push(int data)
{
    if (top >= 100)
    {
        printf("stack Underflow");
        exit(1);
    }
    else
    {
        top++;
        stackArray[top] = data;
    }
}

void pop()
{
    if (top == 0)
    {
        printf("stack overflow");
        exit(1);
    }
    else
        top--;
}

int peek()
{
    if (top >= 1)
        return stackArray[top];
    else
    {
        printf("stack overflow");
        exit(1);
    }
}

void display()
{
    int i = 0;
    while (i <= top)
    {
        printf("%d ", stackArray[i]);
        i++;
    }
}

int main()
{
    push(10);
    push(25);
    push(6);
    push(3);

    display();
    pop();

    printf("\n stack after pop \n");
    display();
}
