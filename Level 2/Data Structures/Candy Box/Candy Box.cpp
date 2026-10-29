#include <iostream>
#include <stack>

using namespace std;

void display_stack(stack<string> stk) {
	while (!stk.empty()) {
		cout << stk.top() << ' ';
		stk.pop();
	}
}

int main() {
	stack<string> candy, temp_box;

	candy.push("Red");
	candy.push("Yellow");
	candy.push("Green");
	candy.push("Yellow");
	candy.push("Orange");

	cout << "Candy box before eating yellows: ";
	display_stack(candy);

	while (!candy.empty()) {
		if (candy.top() != "Yellow")
			temp_box.push(candy.top());

		candy.pop();
	}

	while (!temp_box.empty()) {
		candy.push(temp_box.top());
		temp_box.pop();
	}

	cout << "\n\nCandy box after eating yellows : ";
	display_stack(candy);

    cout << '\n';

	system("pause > 0");

	return 0;
}
