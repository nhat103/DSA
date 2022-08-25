#include <iostream>
#include <string>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
};
void print_list_node(ListNode *temp)
{
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    /* init new node*/
    ListNode *head;
    ListNode *one = NULL;
    ListNode *two = NULL;
    ListNode *three = NULL;
    ListNode *four = NULL;

    // allocate 3 nodes in the heap
    one = new ListNode();
    two = new ListNode();
    three = new ListNode();
    four = new ListNode();

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

    print_list_node(head);
}
