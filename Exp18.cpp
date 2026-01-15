#include <bits/stdc++.h>
using namespace std;

// 18. Doubly Linked List display
struct DNode{ 
    int data;
    DNode* prev; 
    DNode* next; 
    
DNode(int d):data(d),prev(nullptr),next(nullptr){} };

class DoublyLinkedList {
public:
    DNode* head;
    DoublyLinkedList():head(nullptr){}
    void insert(int d){
        DNode* node = new DNode(d);
        if(!head){ 
            head = node; return; }
        DNode* temp = head;
        while(temp->next) 
        temp = temp->next;
        temp->next = node; 
        node->prev = temp;
    }
    void display(){
        DNode* temp = head;
        cout<<"Doubly Linked List: ";
        while(temp){ cout<<temp->data<<" "; temp = temp->next; }
        cout<<"\n";
    }
};

int main(){
    DoublyLinkedList list;
    list.insert(10); list.insert(20); list.insert(30); list.insert(40);
    list.display();
}

