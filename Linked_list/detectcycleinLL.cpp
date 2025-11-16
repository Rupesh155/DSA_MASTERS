// DETECT CYCLE/LOOP IN A LINKED LIST ... by Surya Shrivastava
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

    void func() {
        Node* temp = head;
        temp = temp -> next -> next -> next;
        tail -> next = temp;
    }

    bool detect_cycle() {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) {
                cout << "Cycle Exist ..." << "\n";
                return true;
            }
        }
        cout << "Cycle Doesn't Exist ..." << "\n";
        return false;
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
    ll.func();
    cout << ll.detect_cycle() << "\n";
    return 0;
}