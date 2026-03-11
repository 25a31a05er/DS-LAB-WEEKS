#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node *head = NULL, *temp, *newNode;

    for(int i = 0; i < n; i++) {

        newNode = new Node();

        cout << "Enter data: ";
        cin >> newNode->data;

        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Linked List:\n";

    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}