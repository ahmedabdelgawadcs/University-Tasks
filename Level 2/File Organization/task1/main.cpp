#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct stStudent {
    string full_name, id;
    short grade;
};

stStudent get_student_data() {
    stStudent student;

    cout << "Student's Full name? ";
    getline(cin, student.full_name);

    cout << "Student's ID? ";
    cin >> student.id;

    cout << "Student's Grade? ";
    cin >> student.grade;

    return student;
}

void store_student_in_file(string file_name, stStudent student) {
    fstream file;

    file.open(file_name, ios::out);

    if (file.is_open()) {
        file << "Student's Full Name is: " << student.full_name << endl;
        file << "Student's ID: " << student.id << endl;
        file << "Student's Grade: " << student.grade << endl;

        cout << "\nStudent's Data Stored Successfully!" << endl;

        file.close();
    }
}

int main() {
    store_student_in_file("Student.txt", get_student_data());

    system("pause > 0");

    return 0;
}
