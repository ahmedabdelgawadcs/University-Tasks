#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream file("welcome.txt", ios::out);

	if (file.is_open()) {
		file << "Hello Everybody";

		file.seekp(-4, ios::end);

		file << "one ";

		file.close();
	}
	else cout << "Failed to open the file" << endl;

	return 0;
}