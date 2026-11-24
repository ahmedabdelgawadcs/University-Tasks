#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

int main() {
	fstream file("data.txt", ios::in | ios::out);

	string str;

	file << "Hello, Yossef";
	file.seekg(0);
	file.seekp(0);
	getline(file, str);

	cout << str << endl;
}