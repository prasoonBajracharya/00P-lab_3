#include <iostream>
using namespace std;

class Height {
    int m, cm;
public:
    Height(int a, int b) : m(a), cm(b) {}
    Height() : m(0), cm(0) {}
    
    Height operator+(const Height &h) const {
        Height r;
        r.m = m + h.m;
        r.cm = cm + h.cm;
        r.m += r.cm / 100;
        r.cm %= 100;
        return r;
    }
    
    void display() const {
        cout << "Total height is " << m << " meter " << cm << " centimeter" << endl;
    }
};

int main() {
    int m1, cm1, m2, cm2;
    cout << "Enter two heights in meters and centimeters: ";
    cin >> m1 >> cm1 >> m2 >> cm2;
    Height h1(m1, cm1), h2(m2, cm2);
    Height h = h1 + h2;
    h.display();
    return 0;
}
