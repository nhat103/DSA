#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    //Assign value
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // connect node
    one->next = two;
    two->next = three;
    three->next = NULL;

    //set head as one
    head = one;

    while(head != NULL) {
        cout << head->data << " "  ;
        cout << endl;
        head = head->next;
    }
}
