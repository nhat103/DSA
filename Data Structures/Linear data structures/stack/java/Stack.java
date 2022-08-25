/*java program for stack using array*/
package javacode.linkedlist;

public class Stack {
	static final int MAX = 100;
	int top = -1;
	int array[] = new int[100];

	boolean isEmpty() {
		return (top < 0);
	}

	boolean isFull() {
		return top == MAX;
	}

	void push(int data) {
		if (!isFull()) {
			top++;
			array[top] = data;

		} else {
			System.out.println("stack overflow");

		}
	}

	int pop() {
		if (!isEmpty()) {
			int data = array[top];
			top = top - 1;
			return data;

		} else {
			System.out.println("Stack Underflow");
			return 0;

		}
	}

	public void peek() {
		if (!isEmpty()) {
			System.out.println(array[top]);

		} else {
			System.out.println("stack Underflow");

		}

	}

	public void display() {
		for (int i = 0; i <= top; i++) {
			System.out.print(array[i] + " ");

		}

	}

	public static void main(String[] args) {
		Stack stack = new Stack();
		stack.push(3);
		stack.push(11);
		stack.push(15);
		stack.push(1);
		stack.push(23);
		stack.push(6);

		stack.peek();

		stack.display();

		stack.pop();
		stack.pop();
		System.out.println();
		stack.display();

	}

}
