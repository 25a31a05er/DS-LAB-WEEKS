#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    swapValue(x,y);
    cout << "After Call by Value: " << x << " " << y << endl;

    swapReference(x,y);
    cout << "After Call by Reference: " << x << " " << y << endl;

    return 0;
}
