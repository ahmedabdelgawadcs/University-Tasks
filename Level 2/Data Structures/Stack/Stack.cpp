#include <iostream>
using namespace std;

const short MAX_SIZE = 100;

short top_index = -1;
int stack[MAX_SIZE];

void clear() {
	top_index = -1;
}

bool empty() {
	return top_index == -1;
}

bool full() {
	return top_index == MAX_SIZE - 1;
}

void push(int stack[], int item) {
	if (full())
		cout << "Stack Overflow!";
	else
		stack[++top_index] = item;
}

void pop() {
	if (empty())
		cout << "Stack Underflow";
	else
		top_index--;
}

void top(int stack[]) {
	if (empty())
		cout << "Stack is Empty";
	else
		cout << stack[top_index];
}

void display(int stack[]) {
	for (int i = top_index; i >= 0; i--)
		cout << stack[i] << ' ';
}

int main() {
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	push(stack, 40);
	push(stack, 50);

	// stack now is: 50 40 30 20 10

	cout << "Stack: ";
	display(stack);

	cout << "\nTop of Stack is: ";
	top(stack);

	pop(); // stack now is: 40 30 20 10
	pop(); // stack now is: 30 20 10

	cout << "\nStack after 2 pops: ";
	display(stack);

	clear();

	cout << "\n\nCheck if stack is cleared: " << endl;
	if (empty())
		cout << "Yes, Stack is Cleared Successfully" << endl;
	else
		cout << "No, Stack is NOT empty" << endl;

	system("pause > 0");

	return 0;
}