#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];   // Dynamic Memory Allocation

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;

    delete[] arr;   // free memory

    return 0;
}
