#include <stdio.h>
#include <stdlib.h>

#define maxsize 10

int arrqueue[maxsize];
int front = 0;
int rear = -1;
int itemCount = 0;

int isFull()
{
    return itemCount == maxsize;
}

int isEmpty()
{
    return itemCount == 0;
}

int size()
{
    return itemCount;
}

void enQueue(int data)
{
    if (!isFull())
    {
        rear = rear + 1;
        arrqueue[rear] = data;
        itemCount = itemCount + 1;
    }
    else
    {
        printf("Overflower");
        exit(1);
    }
}

void deQueue()
{
    if (!isEmpty())
    {

        itemCount = itemCount - 1;
    }
    else
    {
        printf("Underflower");
        exit(1);
    }
}

void display()
{
    int size_arr = size();
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ", arrqueue[i]);
    }
}

int main()
{
    enQueue(3);
    enQueue(6);
    enQueue(11);
    display();
    printf("\n");
    deQueue();
    display();
}