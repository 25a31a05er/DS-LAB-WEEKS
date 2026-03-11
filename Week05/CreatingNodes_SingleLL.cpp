#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    Node* temp = head;

    cout << "Linked List Elements:\n";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}