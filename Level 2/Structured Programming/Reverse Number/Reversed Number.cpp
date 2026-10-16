#include <iostream>
using namespace std;

int reverse(int number) {
	short digit;
	int reversed = 0;

	while (number != 0) {
		digit = number % 10;
		reversed = reversed * 10 + digit;
		number /= 10;
	}

	return reversed;
}

int main() {
	cout << "Enter Number: ";
	int number;
	cin >> number;

	cout << "\nNumber Reversed: " << reverse(number) << endl;

	system("pause > 0");

	return 0;
}