// FIND AND REMOVE Nth NODE FROM END ... by Surya Shrivastava
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class List {
    Node* head;
    Node* tail;
    public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        }else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << "NULL\n";
    }
    int getSize() {
        int count = 0;
        Node* temp = head;
        while(temp!=NULL) {
            temp = temp -> next;
            count++;
        }
        return count;
    }
    void remove(int n) {
    int size = getSize();
    int i = 1;
    Node* prev = head;
    while(i < size-n) {
        prev = prev -> next;
        i++;
    }
    cout << "going to delete : " << prev -> next -> data << "\n";
    prev -> next = prev -> next -> next;
    }

};

int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList(); //  1 -> 2 -> 3 -> NULL
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.printList(); // 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL
    ll.remove(3);
    ll.printList(); // 1 -> 2 -> 3 -> 5 -> 6 -> NULL
    return 0;
}