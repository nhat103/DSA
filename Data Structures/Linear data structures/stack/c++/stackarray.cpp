/* C++ Program for stack using array*/
#include <iostream>
#include <math.h>

using namespace std;

int stack[10];
int maxsize = 10;
int top = -1;

int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == maxsize;
}
void push(int data)
{
    if (isFull())
    {
        printf("stackoverflow");
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
    if (!isEmpty())
    {
        int data;
        stack[top] = data;
        top = top - 1;
        return data;
    }
    else
    {
        printf("stack underflow");
        exit(1);
        /* code */
    }
}
void peek()
{
    if (!isEmpty())
    {
        printf("\n%d\n", stack[top]);
        /* code */
    }
    else
    {
        printf("stack is Empty");
    }
}

void display()
{
    int i = 0;
    while (i <= top)
    {

        cout << stack[i] << " ";
        i++;

        /* code */
    }
}
int main()
{
    push(6);
    push(15);
    push(1);
    push(23);
    push(3);
    push(11);

    display();
    pop();
    pop();
    peek();
    printf("\n");
    display();
}