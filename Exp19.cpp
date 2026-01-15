#include <bits/stdc++.h>
using namespace std;

// 19. Circular Linked List display
struct CNode{ int data; CNode* next; CNode(int d):data(d),next(nullptr){} };
class CircularLinkedList {
public:
    CNode* head;
    CircularLinkedList():head(nullptr){}
    void insert(int d){
        CNode* node = new CNode(d);
        if(!head){ head = node; node->next = head; return; }
        CNode* temp = head;
        while(temp->next != head) temp = temp->next;
        temp->next = node; node->next = head;
    }
    void display(){
        if(!head){ cout<<"List is empty.\n"; return; }
        CNode* temp = head;
        cout<<"Circular Linked List: ";
        do{ cout<<temp->data<<" "; temp = temp->next; } while(temp!=head);
        cout<<"\n";
    }
};

int main(){
    CircularLinkedList list; list.insert(10); list.insert(20); list.insert(30); list.insert(40);
    list.display();
}

