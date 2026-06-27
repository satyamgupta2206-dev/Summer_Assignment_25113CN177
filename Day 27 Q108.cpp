#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    int mathMarks;
    int scienceMarks;
    int englishMarks;
    int totalMarks;
    double percentage;
    string grade;
};

void calculateResults(Student &s) {
    s.totalMarks = s.mathMarks + s.scienceMarks + s.englishMarks;
    s.percentage = s.totalMarks / 3.0;

    if (s.percentage >= 90) s.grade = "A+";
    else if (s.percentage >= 80) s.grade = "A";
    else if (s.percentage >= 70) s.grade = "B";
    else if (s.percentage >= 60) s.grade = "C";
    else if (s.percentage >= 50) s.grade = "D";
    else s.grade = "Fail";
}

void displayMarksheet(const Student &s) {
    cout << "\n========================================" << endl;
    cout << "           STUDENT MARKSHEET            " << endl;
    cout << "========================================" << endl;
    cout << " Name: " << s.name << endl;
    cout << " Roll Number: " << s.rollNumber << endl;
    cout << "----------------------------------------" << endl;
    cout << " Subject          | Max Marks | Obtained " << endl;
    cout << "----------------------------------------" << endl;
    cout << " Mathematics      | 100       | " << s.mathMarks << endl;
    cout << " Science          | 100       | " << s.scienceMarks << endl;
    cout << " English          | 100       | " << s.englishMarks << endl;
    cout << "----------------------------------------" << endl;
    cout << " Total Marks      | 300       | " << s.totalMarks << endl;
    cout << " Percentage       |           | " << fixed << setprecision(2) << s.percentage << "%" << endl;
    cout << " Grade            |           | " << s.grade << endl;
    cout << "========================================" << endl;
}

int main() {
    int totalStudents;
    cout << "Enter the number of students: ";
    cin >> totalStudents;

    vector<Student> students(totalStudents);

    for (int i = 0; i < totalStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cin.ignore();
        
        cout << "Enter Name: ";
        getline(cin, students[i].name);
        
        cout << "Enter Roll Number: ";
        cin >> students[i].rollNumber;
        
        cout << "Enter Mathematics Marks: ";
        cin >> students[i].mathMarks;
        
        cout << "Enter Science Marks: ";
        cin >> students[i].scienceMarks;
        
        cout << "Enter English Marks: ";
        cin >> students[i].englishMarks;

        calculateResults(students[i]);
    }

    cout << "\nGenerating Marksheets..." << endl;
    for (int i = 0; i < totalStudents; i++) {
        displayMarksheet(students[i]);
    }

    return 0;
}
