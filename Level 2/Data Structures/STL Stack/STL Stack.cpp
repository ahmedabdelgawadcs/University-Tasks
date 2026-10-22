#include <iostream>
#include <stack>

using namespace std;

int main() {
	string str;
	stack<char> stk;

	cout << "Enter a String: ";
	cin >> str;	// hello

	for (int i = 0; i < str.length(); i++)
		stk.push(str[i]);	// o l l e h

	bool palindrom = true;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] != stk.top()) {		
			palindrom = false;
			break;
		}

		stk.pop();
	}

	if (palindrom)
		cout << "String is Plaindrom!" << endl;
	else
		cout << "String is NOT Palindrom!" << endl;

	system("pause > 0");

	return 0;
}