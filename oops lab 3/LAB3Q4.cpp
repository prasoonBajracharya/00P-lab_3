#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int id;
public:
    Student() : name(""), id(0) {}
    friend istream& operator>>(istream &in, Student &s);
    friend ostream& operator<<(ostream &out, const Student &s);
};

istream& operator>>(istream &in, Student &s) {
    in >> s.name >> s.id;
    return in;
}

ostream& operator<<(ostream &out, const Student &s) {
    out << "Student Name: " << s.name << ", ID: " << s.id;
    return out;
}

int main() {
    Student s;
    cout << "Enter student's name and ID: ";
    cin >> s;
    cout << s << endl;
    return 0;
}
