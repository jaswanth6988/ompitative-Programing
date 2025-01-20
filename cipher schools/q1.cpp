#include <iostream>
using namespace std;

struct Stud {
    string name;
    int rn;
    float marks[3];
};

int main() {
    Stud* stu = new Stud;

    cin >> stu->name >> stu->rn;
    for (int i = 0; i < 3; i++) {
        cin >> stu->marks[i];
    }

    float avg = (stu->marks[0] + stu->marks[1] + stu->marks[2]) / 3;

    cout << stu->name << " " << stu->rollNumber << " ";
    cout << stu->marks[0] << " " << stu->marks[1] << " " << stu->marks[2] << " ";
    cout << avg << endl;

    delete stu;
    return 0;
}
