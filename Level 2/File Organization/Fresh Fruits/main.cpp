#include <iostream>
#include <fstream>

using namespace std;

void app_to_file(string line, string file_name) {
	fstream file;

	file.open(file_name, ios::app);

	if (file.is_open())
		file << line << endl;

	file.close();
}

int main() {
	app_to_file
}