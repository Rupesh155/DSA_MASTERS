// ITERATIVE SEARCH ON A LINKED LIST ... by Surya Shrivastava
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
    int helper(Node* temp, int val){
        if(temp == NULL) {
            return -1;
        }
        if(temp->data == val) {
            return 0;
        }
        int idx = helper(temp->next, val);
        if(idx == -1) {
            return -1;
        }else{
             return idx + 1;
        }
    }
    int recursive_search(int val) {
        return helper(head, val);
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
    int ans = ll.recursive_search(6);
    cout << "is at the position : " << ans << "\n";
    return 0;
}