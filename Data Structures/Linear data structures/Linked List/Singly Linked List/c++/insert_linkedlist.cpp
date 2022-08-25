#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void print_list_node(Node *temp)
{
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtbeginning(Node **head_ref,int value)

{
    Node *Node_begin;
    Node_begin = new Node();
    Node_begin->data = value;
    Node_begin->next = *head_ref;
    *head_ref = Node_begin;
}

void insertAfter(Node *Node_insert,int value)
{
    Node *NewNode;
    NewNode = new Node();
    NewNode->data = value;
    NewNode->next = Node_insert->next;
    Node_insert->next = NewNode;

}

void insertAtend(Node **head_ref,int value)
{

    Node *EndNode;
    Node *last = *head_ref;
    EndNode = new Node();
    EndNode->data = value;
    EndNode->next = NULL;


    while(last->next != NULL) {
        last = last->next;


    }
    last->next = EndNode;
}

int main()
{
    /* init new node*/
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    Node *four = NULL;

    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();

    //Assign value
    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    // connect node
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    //set head as one
    head = one;

    insertAtbeginning(&head, 8);
    insertAfter(three,10);
    insertAtend(&head,25);
    print_list_node(head);

}
