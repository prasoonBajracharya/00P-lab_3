#include <iostream>
using namespace std;

class Distance {
    int m, cm;
public:
    Distance(int a, int b) : m(a), cm(b) {}
    Distance() : m(0), cm(0) {}
    
    Distance operator<=(const Distance &d) const {
        Distance r;
        if(m>=d.m)
        r.m = m;
        else
        r.m = d.m;
        if(cm>=d.cm)
        r.cm = cm;
        else
        r.cm = d.cm;
        return r;
    }
    
    void display() const {
        cout << "Larger distance is " << m << " meter " << cm << " centimeter" << endl;
    }
};

int main() {
    int m1, cm1, m2, cm2;
    cout << "Enter two distance in meters and centimeters: ";
    cin >> m1 >> cm1 >> m2 >> cm2;
    Distance d1(m1, cm1), d2(m2, cm2);
    Distance d = d1 <= d2;
    d.display();
    return 0;
}
