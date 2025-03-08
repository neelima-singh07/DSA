//Complete code to reverse a linked list
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct Node {
    int data;
    struct Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    
    while (curr != NULL) {
        next = curr->next;  // store the next node
        curr->next = prev;  // reverse the current node's pointer
        prev = curr;        // move pointers one position ahead
        curr = next;
    }
    return prev;  // prev is the new head of the reversed list
}

// Helper function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to create and test the linked list reversal
int main() {
    int n;
    cin >> n;  // Read the number of elements

    Node* head = NULL;
    Node* tail = NULL;
    
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;  // Read each element
        
        Node* newNode = new Node(value);
        
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    
    cout << "Original List: ";
    printList(head);
    
    head = reverseList(head);
    
    cout << "Reversed List: ";
    printList(head);

    return 0;
}
