#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;

	for (int i = 1; i <= 10; i++)
		q.push(i);

	while (!q.empty()) {
		int front = q.front();

		if (front % 2 != 0)
			cout << front << ' ';

		q.pop();
	}

	cout << '\n';

	system("pause > 0");

	return 0;
}