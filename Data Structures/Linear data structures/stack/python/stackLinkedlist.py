# Python program for linked list implementation of stack
from logging import root


class StackNode:
    # Constructor to initialize a node
    def __init__(self, data):
        self.data = data
        self.next = None


class Stack:
    # Constructor to initialize a topNode node
    def __init__(self):
        self.topNode = None

    def isEmpty(self):
        return True if self.topNode is None else False

    def push(self, data):
        newNode = StackNode(data)
        newNode.next = self.topNode
        self.topNode = newNode

    def pop(self):
        if self.isEmpty():
            return float("-inf")
        temp = self.topNode
        self.topNode = self.topNode.next
        poped = temp.data
        return poped

    def peek(self):
        if self.isEmpty():
            return float("-inf")
        return self.topNode.data


stack = Stack()
stack.push(3)
stack.push(23)
stack.push(6)
print(stack)
