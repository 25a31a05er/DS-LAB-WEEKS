#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    display(arr,n);

    return 0;
}