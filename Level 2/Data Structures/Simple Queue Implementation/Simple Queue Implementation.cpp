#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int queue[MAX_SIZE];

int _front = -1, _rear = -1;

bool full() {
	return _rear == MAX_SIZE - 1;
}

bool empty() {
	return _rear == -1 && _front == -1 || _front > _rear;
}

void push(int val) {
	if (full())
		cout << "Queue Overflow" << endl;
	else {
		if (_rear == -1 && _front == -1)
			_front++;

		_rear++;

		queue[_rear] = val;
	}
}

void pop() {
	if (empty())
		cout << "Queue Underflow" << endl;
	else
		_front++;
}

int front() {
	return queue[_front];
}

int back() {
	return queue[_rear];
}

int size() {
	if (empty())
		return 0;

	return _rear - _front + 1;
}

void display() {
	while (!empty()) {
		cout << front() << ' ';

		pop();
	}
}

int main() {
	for (int i = 10; i <= 40; i += 10)
		push(i);

	cout << "Count: " << size() << endl;
	cout << "Front: " << front() << endl;
	cout << "Back: " << back() << endl;

	cout << "\nQueue: ";
	display();
	cout << '\n';

	system("pause > 0");

	return 0;
}