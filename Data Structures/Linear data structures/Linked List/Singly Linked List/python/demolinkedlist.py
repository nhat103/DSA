class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
class Linkedlist:
    def __init__(self):
        self.head = None


    def insertAtBeginnng(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
    def insertApter(self,prev_node,data):
        new_node = Node(data)
        new_node.next = prev_node.next
        prev_node.next = new_node
    def insertAtEnd(self,data):
        new_node = Node(data)
        temp = self.head
        while(temp.next):
            temp = temp.next
        new_node.next = None
        temp.next = new_node

    def deleteNode(self,position):
        temp = self.head
        if position == 0:
            temp.next = self.head
            self.head = temp.next
        else:
            for i in  range(position):
                if temp is not None:
                    temp = temp.next
            temp.next = temp.next.next


    #Traversing a Linked List
    def printList(self):
        temp = self.head
        while temp is not None:
            print(temp.data)
            temp = temp.next


if __name__ == '__main__':
    llist = Linkedlist()
    llist.head = Node(2)
    llist.head.next = Node(3)
    llist.insertAtBeginnng(1)
    llist.insertApter(llist.head.next,7)
    llist.insertAtEnd(10)
    llist.printList()

    print("list after delete")
    llist.deleteNode(3)
    llist.printList()