#include <iostream>
using namespace std;

class Student {
    int visits;
public:
    Student(int v = 0){ visits = v ;  }

    Student operator++(int) {
        Student temp(*this);
        visits++;
        return temp;
    }

    void display() const {
        cout << "Number of visits: " << visits << endl;
    }
};

int main() {
    Student s(1);
    cout << "Before increment: ";
    s.display();
    
    s++;
    
    cout << "After increment: ";
    s.display();
    return 0;
}
