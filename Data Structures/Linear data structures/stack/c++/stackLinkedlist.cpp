/* C++ program to Implement a stack using singly linked list. */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};
Node *top;

void push(int data)
{
    Node *temp = new Node();

    if (!temp)
    {
        cout << "/nStack Overflow";
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
    Node *temp;

    if (isEmpty())
    {
        cout << "/nStack underflow" << endl;
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
    Node *temp;

    if (isEmpty())
    {
        cout << "\n Stack Underflow" << endl;
        exit(1);
    }
    else
    {
        temp = top;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
}

int main()
{
    push(3);
    push(15);
    push(6);
    display();

    pop();
    printf("\n stack after pop: ");
    display();

    return 0;
}
