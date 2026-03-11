#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called\n";
    }

    ~Demo() {
        cout << "Destructor Called";
    }
};

int main() {
    Demo obj;
    return 0;
}