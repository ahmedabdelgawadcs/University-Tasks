#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<char> box, green_balls, red_balls;
	int counter = 0;
	char ball;

	cout << "Enter colors of 10 balls (R for Red and G for Green):" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> ball;

		box.push(ball);
	}

	cout << "\nNumber of Green balls = ";
	while (!box.empty()) {
		if (box.top() == 'G') {
			counter++;

			green_balls.push(box.top());
		}
		else red_balls.push(box.top());

		box.pop();
	}

	cout << counter << endl;

	cout << "\nGreen Stack: ";
	while (!green_balls.empty()) {
		cout << green_balls.top() << ' ';

		green_balls.pop();
	}

	cout << "\nRed Stack: ";
	while (!red_balls.empty()) {
		cout << red_balls.top() << ' ';

		red_balls.pop();
	}

	cout << '\n';

	system("pause > 0");

	return 0;
}