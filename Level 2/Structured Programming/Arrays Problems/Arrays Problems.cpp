#include <iostream>
using namespace std;

int main() {
	int numbers[5] = { };

	for (int i = 0; i < 5; i++) {
		cout << "Enter Number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	cout << "\nNumbers you Entered: " << endl;

	for (int i = 0; i < 5; i++)
		cout << numbers[i] << endl;


	cout << "\nSum of this Array = ";
	
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
		sum += numbers[i];

	cout << sum << '\n' << endl;

	int max = numbers[0];

	for (int i = 1; i < 5; i++)
		if (numbers[i] > max)
			max = numbers[i];

	cout << "Max Number = " << max << endl;

	system("pause > 0");

	return 0;
}