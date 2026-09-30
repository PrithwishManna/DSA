#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;             // A pointer that holds the memory address of the next Node in the sequence.

    Node(int val){          // Parametrized Constructor
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;             // Head stores first node's address.
    Node* tail;             // Tail stores last node's address.

public:
    List(){                 // Non-Parametrized Constructor
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);      // Creates node dynamically.
        if(head == NULL){                   // Empty list?
            head = tail = newNode;
        }
        else{
            newNode->next = head;           // Connect new node to current first node.
            head = newNode;                 // Move head to new first node.
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){                   // Loops through the list node-by-node until it reaches the end (where next is NULL).
            head = tail = newNode;          // If the list was empty, this single node is now both the first (head) and the last (tail) node.
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back(){
        if(head == NULL){                   
            cout << "LL is empty\n";
            return;
        }
        // Handle case where there is only 1 node
        if(head == tail){
            delete head;
            head = tail = NULL;
        }

        Node* temp = head;
        while(temp->next != tail){          // Move until node before tail.
            temp = temp->next;              // Move forward.
        }
        temp->next = NULL;                  // Disconnect last node.

        delete tail;                        // Deletes old last node
        tail = temp;                        // New tail.
    }

    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid Position!";
            return;
        }
        if(pos == 0){
            push_front(val);
        }

        Node* temp = head;                  // Starts traversal.
        for(int i = 0;i < pos - 1;i++){
            if(temp == NULL){
                cout << "Invalid position\n";
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL(){
        Node* temp = head;

        while(temp != NULL){                    // Move until node before tail.
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){              // Compare current node's value with the key.
                return idx;
            }
            temp = temp->next;                  // Move to the next node.
            idx++;
        }

        return -1;
    }
};

int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(5);
    ll.pop_back();

    ll.insert(4, 1);
    ll.printLL();

    ll.pop_back();
    ll.printLL();

    cout << ll.search(4) << endl;

    return 0;
}