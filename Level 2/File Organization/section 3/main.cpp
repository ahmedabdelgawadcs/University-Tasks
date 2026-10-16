#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("data.txt", ios::out);

    file << "10\n20\n30" << endl;

    file.close();

    file.open("data.txt", ios::in);

    short num1, num2, num3;
    file >> num1 >> num2 >> num3;

    file.close();

    file.open("data.txt", ios::out | ios::app);

    file << "-------------------" << endl;
    file << "Sum = " << num1 + num2 + num3 << endl;

    file.close();

    return 0;
}
