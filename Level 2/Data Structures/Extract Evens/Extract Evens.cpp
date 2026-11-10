#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<short> q;

	q.push(2);
	q.push(5);
	q.push(8);
	q.push(3);
	q.push(4);
	q.push(1);
	
	while (!q.empty()) {
		short front = q.front();
		
		if (front % 2 == 0)
			cout << front << ' ';

		q.pop();
	}

	system("pause > 0");

	return 0;
}