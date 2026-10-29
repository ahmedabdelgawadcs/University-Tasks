#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int queue[MAX_SIZE];

short f = -1, r = -1;

bool empty() {
	return f == -1 && r == -1;
}

bool full() {
	return r = MAX_SIZE - 1;
}

int front() {
	return queue[f];
}

int back() {
	return queue[r];
}

void enqueue(int val) {
	if (f == -1)
		f++;

	if (r == MAX_SIZE)

	queue[r++] = val;
}

void dequeue() {

}


void display() {

}

int main() {
	
}