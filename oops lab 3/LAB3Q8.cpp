#include <iostream>
using namespace std;

class Feet {
public:
    int ft;
    int inch;

    Feet(int f = 0, int i = 0) : ft(f), inch(i) {}
};

class Kilometer {
    int km;
    int m;

public:
    Kilometer(const Feet &f) {
        double totalFeet = f.ft + (f.inch / 12.0);
        double totalKm = totalFeet / 328.0;
        km = static_cast<int>(totalKm);
        m = static_cast<int>((totalKm - km) * 1000);
    }

    void display() const {
        cout << "Equivalent distance is " << km << " km " << m << " m" << endl;
    }
};

int main() {
    int ft, inch;
    cout << "Enter distance in feet and inches: ";
    cin >> ft >> inch;

    Feet f(ft, inch);
    Kilometer k = f;

    k.display();
    return 0;
}
