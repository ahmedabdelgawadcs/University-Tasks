#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	for (int i = 10; i < 100; i++)
		if (i % 5 == 3) {
			cout << i << endl;
			sum += i;
		}

	cout << "\n____________________________________________" << endl;

	cout << "\nSum = " << sum << endl;

	system("pause > 0");

	return 0;
}