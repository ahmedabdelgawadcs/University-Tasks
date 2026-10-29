#include <iostream>
#include <string>

using namespace std;

struct employee {
	string name;
	float salary;
	int id;
};

int main() {
	employee empl;

	cout << "Name: ";
	getline(cin, empl.name);

	cout << "Salary: ";
	cin >> empl.salary;

	cout << "ID: ";
	cin >> empl.id;

	cout << "\n_______________________________________________\n" << endl;

	cout << "Empl: " << empl.id << endl;
	cout << "His Name: " << empl.name << endl;
	cout << "Salary: " << empl.salary << endl;

	system("pause > 0");

	return 0;
}