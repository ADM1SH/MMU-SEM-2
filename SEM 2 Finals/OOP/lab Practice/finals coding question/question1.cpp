#include <iostream>
using namespace std;

class PianoExam {
protected:
    string studentName, examDate;
public:
    PianoExam(string name, string date) : studentName(name), examDate(date) {}
    void display() {
        cout << "=====Student Exam Record=====" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Exam Date    : " << examDate << endl;
    }
};

class TheoryExam : public PianoExam {
    private:
        float marks[3], total = 0, avg;
        char grade;
    public:
        TheoryExam(const string& name, const string& date, const float m[3]) : PianoExam(name, date), total(0), avg(0), grade('F'){
            for (int i = 0; i < 3; ++i) {
                marks[i] = m[i];
                total += m[i];
            }
        }

    void avgMarks() { avg = total / 3; }
    void getGrade() {
        if (avg >= 21) grade = 'A';
        else if (avg >= 16) grade = 'B';
        else if (avg >= 11) grade = 'C';
        else grade = 'F';
    }

    void display() {
        cout << "=====Student Exam Record=====" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Exam Date    : " << examDate << endl;
        avgMarks();
        getGrade();
        cout << "Average Mark : " << avg << endl;
        cout << "Grade        : " << grade << endl;
    }
};

int main() {
    string name, date;
    float marks[3];

    cout << "Enter name: "; getline(cin, name);
    cout << "Enter exam date: "; getline(cin, date);

    const char* topics[3] = {"Rhythm", "Chords", "Harmony"};
    cout << "Enter marks:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << topics[i] << " : ";
        cin >> marks[i];
    }

    TheoryExam exam(name, date, marks);
    exam.display();

    return 0;
}