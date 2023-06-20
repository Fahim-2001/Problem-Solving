#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int mathMarks;
    int engMarks;
};

vector<Student> reverseStudentData(vector<Student> students)
{
    vector<Student> reversedStudents;
    for (int i = students.size() - 1; i >= 0; i--)
    {
        reversedStudents.push_back(students[i]);
    }
    return reversedStudents;
}

int main()
{
    int N;
    cin >> N;

    vector<Student> students(N);
    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].mathMarks >> students[i].engMarks;
    }

    vector<Student> reversedStudents = reverseStudentData(students);

    for (int i = 0; i < reversedStudents.size(); i++)
    {
        cout << reversedStudents[i].name << " " << reversedStudents[i].cls << " " << reversedStudents[i].section << " "
             << reversedStudents[i].mathMarks << " " << reversedStudents[i].engMarks << endl;
    }

    return 0;
}