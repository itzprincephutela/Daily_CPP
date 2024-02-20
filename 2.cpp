#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    // Constructor to initialize the name of the student
    Student() : name("Unknown") {} // Default constructor sets the name to "Unknown"

    Student(const string& studentName) : name(studentName) {}

    void setName(const string& studentName) {
        name = studentName;
    }

    string getName() const {
        return name;
    }
};

int main() {
    int numberOfStudents;
    cout << "Enter the number of students: ";
    scin >> numberOfStudents;

    string name;
    Student* students = new Student[numberOfStudents];

    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Enter the name of student " << i + 1 << " (or press Enter for default 'Unknown'): ";
        getline(cin >> ws, name); // Allowing spaces in names

        if (name.empty()) {
            // If the user just presses Enter without entering a name
            students[i] = Student(); // Use the default constructor (name = "Unknown")
        } else {
            students[i] = Student(name); // Set the name of the student
        }
    }

    cout << "\nNames of the students:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Student " << i + 1 << ": " << students[i].getName() << endl;
    }

    delete[] students; // Free the allocated memory
    return 0;
}
