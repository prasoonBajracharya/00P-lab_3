#include <iostream>
#include <string>
using namespace std;

class StringConcat {
    string a;

public:
    StringConcat(const string &s) : a(s) { }
    StringConcat() { }
    StringConcat operator+(const StringConcat &s) const {
        StringConcat r;
        r.a = this->a + s.a;
        return r;
    }
    void display() const {
        cout << "Concatenated string is " << a << endl;
    }
};

int main() {
    string str1, str2;
    cout << "Enter two strings to concatenate: ";
    cin >> str1 >> str2;
    StringConcat s1(str1), s2(str2);
    StringConcat s = s1 + s2;
    s.display();
    return 0;
}
