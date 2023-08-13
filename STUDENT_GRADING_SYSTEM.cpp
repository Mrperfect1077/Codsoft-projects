#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    string name;
    double grade;
    char addMore;

    do {
        cout << "Enter student's name: ";
        cin >> name;

        cout << "Enter student's grade: ";
        cin >> grade;

        students.push_back({name, grade});

        cout << "Add another student (y/n)? ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    
    double totalGrade = 0;
    for (const Student& student : students) {
        totalGrade += student.grade;
    }
    double averageGrade = totalGrade / students.size();

    
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;
    for (const Student& student : students) {
        highestGrade = max(highestGrade, student.grade);
        lowestGrade = min(lowestGrade, student.grade);
    }

    cout << "Average grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}