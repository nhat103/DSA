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

void deleteFist_Node(Node **head_ref)
{

}

void delele_position_Node(Node **head_ref,int position)
{
    if(position==1) {
        Node *first = *head_ref;
        *head_ref = first->next;
    } else {
        Node *temp = *head_ref;
        for(int i = 2; i<position; i++) {

            if(temp->next != NULL) {
                temp = temp->next;
            }
        }

        temp->next = temp->next->next;
    }

}

int main()
{
    /* init new node*/
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    Node *four = NULL;
    Node *five = NULL;

    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    five = new Node();

    //Assign value
    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;

    // connect node
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    //set head as one
    head = one;

    //insertAtbeginning(&head, 8);
    //insertAfter(three,10);
    //insertAtend(&head,25);
    delele_position_Node(&head,3);
    print_list_node(head);

}
