#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int v = 0){	n=v;	}
    friend Number operator-(const Number &num);
    void display(){
        cout << "Number: " << n << endl;
    }
};

Number operator-(const Number &num) {
    return Number(-num.n);
}

int main() {
    Number n1(20);
    Number n2 = -n1;
    n1.display();
    n2.display();
    return 0;
}
