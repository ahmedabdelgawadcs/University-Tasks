#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v(3, 100);

	cout << "Insert " << v.size() << " Values:" << endl;

	for (int i = 0; i < v.size(); i++)
		cin >> v[i];

	v.push_back(10);
	v.push_back(20);

	cout << "\nVector Values : ";

	for (int n : v)
		cout << n << ' ';

	v.pop_back();

	cout << "\nVector Values after poping: ";

	for (int n : v)
		cout << n << ' ';

	cout << '\n';

	system("pause > 0");

	return 0;
}