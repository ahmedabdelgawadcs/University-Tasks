#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	queue<int> q;

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;

		q.push(n);
	}

	int X, counter = 0;
	cin >> X;

	while (!q.empty()) {
		if (q.front() == X) {
			cout << '\n' << counter << endl;
			break;
		}

		counter++;
		
		q.pop();
	}

	if (q.empty())
		cout << "\nNOT FOUND" << endl;

	system("pause > 0");

	return 0;
}