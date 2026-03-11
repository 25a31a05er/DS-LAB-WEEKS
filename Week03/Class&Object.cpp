#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age;
    }
};

int main() {
    Student s;
    s.name = "Gloria";
    s.age = 18;

    s.display();

    return 0;
}
