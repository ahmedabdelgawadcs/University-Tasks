#include <iostream>
#include <string>
using namespace std;

void dm(string name, short age) {
	cout << "Hello, " + name + '!' << endl;
	cout << "Your age: " << age << endl;
}

int sum(int number1, int number2) {
	return number1 + number2;
}

void even_or_odd(int number) {
	if (number % 2 == 0)
		cout << number << " is Even" << endl;
	else cout << number << " is Odd" << endl;
}

void max(double number1, double number2) {
	if (number1 > number2)
		cout << number1 << " > " << number2 << endl;
	else if (number2 > number1)
		cout << number2 << " > " << number1 << endl;
	else
		cout << number1 << " = " << number2 << endl;
}

int main() {
	dm("Ahmed Ali", 19);
	cout << '\n';

	int num1 = 1, num2 = 2, sum_two_numbers = sum(num1, num2);
	cout << num1 << " + " << num2 << " = " << sum_two_numbers << endl;

	even_or_odd(sum_two_numbers);

	cout << '\n';
	max(1, 2);

	system("pause > 0");

	return 0;
}