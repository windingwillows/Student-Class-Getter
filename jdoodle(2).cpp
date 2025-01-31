#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    // Constructor to initialize student data
    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getGrade() {
        return grade;
    }

    // Setter methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setGrade(double g) {
        grade = g;
    }

    // Method to display student information
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Create a Student object
    Student student1("Alice", 20, 88.5);

    // Display initial information
    student1.display();

    // Modify student information using setters
    student1.setName("Bob");
    student1.setAge(21);
    student1.setGrade(90.0);

    // Display updated information
    cout << "\nUpdated Information:" << endl;
    student1.display();

    return 0;
}
