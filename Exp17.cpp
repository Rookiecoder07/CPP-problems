#include <bits/stdc++.h>
using namespace std;

struct SNode {
    int data;
    SNode* next;
    SNode(int d) : data(d), next(nullptr) {}
};

class SinglyLinkedList {
public:
    SNode* head;
    SinglyLinkedList() : head(nullptr) {}

    void insertAtStart(int d) {
        SNode* node = new SNode(d);
        node->next = head;
        head = node;
    }

    void insertAtEnd(int d) {
        SNode* node = new SNode(d);
        if (!head) {
            head = node;
            return;
        }
        SNode* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = node;
    }

    void insertAtPosition(int d, int pos) {
        if (pos == 0) {
            insertAtStart(d);
            return;
        }
        SNode* temp = head;
        for (int i = 0; i < pos - 1 && temp; i++)
            temp = temp->next;

        if (!temp)
            return;

        SNode* node = new SNode(d);
        node->next = temp->next;
        temp->next = node;
    }

    void deleteAtStart() {
        if (!head)
            return;
        SNode* t = head;
        head = head->next;
        delete t;
    }

    void deleteAtEnd() {
        if (!head)
            return;
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        SNode* temp = head;
        while (temp->next->next)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteAtPosition(int pos) {
        if (!head)
            return;
        if (pos == 0) {
            deleteAtStart();
            return;
        }
        SNode* temp = head;
        for (int i = 0; i < pos - 1 && temp; i++)
            temp = temp->next;

        if (!temp || !temp->next)
            return;

        SNode* t = temp->next;
        temp->next = t->next;
        delete t;
    }

    bool search(int key) {
        SNode* temp = head;
        while (temp) {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }

    void display() {
        SNode* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    SinglyLinkedList list;
    int times;
    cin >> times;

    while (times--) {
        int choice;
        cin >> choice;

        int value, pos;
        switch (choice) {
        case 1:
            cin >> value;
            list.insertAtStart(value);
            break;
        case 2:
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cin >> value >> pos;
            list.insertAtPosition(value, pos);
            break;
        case 4:
            list.deleteAtStart();
            break;
        case 5:
            list.deleteAtEnd();
            break;
        case 6:
            cin >> pos;
            list.deleteAtPosition(pos);
            break;
        case 7:
            cin >> value;
            cout << (list.search(value) ? "Found" : "Not Found") << endl;
            break;
        case 8:
            list.display();
            break;
        }
    }
    return 0;
}
