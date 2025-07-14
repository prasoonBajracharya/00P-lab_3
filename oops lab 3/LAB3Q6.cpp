#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    Time(int a, int b, int c) : h(a), m(b), s(c) {}
    Time() : h(0), m(0), s(0) {}
    
    Time operator+(const Time &t) const {
        Time r;
        r.h = h + t.h;
        r.m = m + t.m;
        r.s = s + t.s;
        r.m += r.s / 60;
        r.h += r.m / 60;
        r.m %= 60;
        r.s %= 60;
        return r;
    }
    
    void display() const {
        cout << "Total time is " << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter two times in hh mm ss format: ";
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    Time t1(h1, m1, s1), t2(h2, m2, s2);
    Time t = t1 + t2;
    t.display();
    return 0;
}
