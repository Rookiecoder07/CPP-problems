#include <bits/stdc++.h>
using namespace std;

// 21. Circular Queue using array
class CircularQueue {
    int maxSize;
    vector<int> q;
    int front, rear, size;
public:
    CircularQueue(int s):maxSize(s),q(s),front(0),rear(-1),size(0){}
    void push(int value){
        if(isFull()) cout<<"Queue is full. Cannot enqueue "<<value<<"\n";
        else{ rear = (rear+1)%maxSize; q[rear]=value; size++; cout<<"Enqueued "<<value<<"\n"; }
    }
    int pop(){
        if(isEmpty()){ cout<<"Queue is empty. Cannot dequeue.\n"; return -1; }
        int value = q[front]; front = (front+1)%maxSize; size--; return value;
    }
    bool isEmpty(){ return size==0; }
    bool isFull(){ return size==maxSize; }
};

int main(){
    CircularQueue cq(5);
    cq.push(10); cq.push(20); cq.push(30);
    cout<<"Dequeued element: "<<cq.pop()<<"\n";
    cout<<"Is queue empty? "<<(cq.isEmpty()?"Yes":"No")<<"\n";
    cout<<"Is queue full? "<<(cq.isFull()?"Yes":"No")<<"\n";
}

