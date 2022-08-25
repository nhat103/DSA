package javacode.linkedlist;

public class Demolinkedlist {
	Node head;

	class Node {
		int data;
		Node next;

		Node(int d) {
			data = d;
			next = null;
		}
	}

	public void insertAtBeginning(int value) {
		Node new_node = new Node(value);
		// new_node.data = value;
		new_node.next = head;
		head = new_node;

	}

	public void inserAfter(Node prev_node, int value) {
		Node new_Node = new Node(value);

		new_Node.next = prev_node.next;
		prev_node.next = new_Node;

		// prev_node.next = new_Node;
		// new_Node.next = prev_node.next;

		/*
		 * prev_node.next = new_Node; new_Node.next = prev_node.next.next;
		 */

	}

	public void insertAtEnd(int value) {
		Node last = head;
		Node new_Node = new Node(value);
		while (last.next != null) {
			last = last.next;
		}
		new_Node.next = null;
		last.next = new_Node;

	}

	public void printList() {
		Node temp = head;
		while (temp != null) {
			System.out.print("  " + temp.data);
			temp = temp.next;
		}

	}

	public void deleteNode(int position) {
		Node temp = head;
		if (position == 1) {
			head = head.next;
		} else {
			for (int i = 2; i < position; i++) {
				if (temp != null) {
					temp = temp.next;
				}
			}
			temp.next = temp.next.next;
		}

	}

	public static void main(String[] args) {

		Demolinkedlist list = new Demolinkedlist();
		list.insertAtBeginning(2);
		list.insertAtBeginning(3);
		list.insertAtBeginning(4);
		list.inserAfter(list.head.next, 5);
		list.insertAtEnd(6);
		System.out.print("Linked list:");
		list.printList();
		System.out.println();

		list.deleteNode(4);
		System.out.print("Linked list after delete:");
		list.printList();
	}
}
