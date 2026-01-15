#include <bits/stdc++.h>
using namespace std;

// 20. Stack using array
class StackArr {
    int maxSize;
    vector<int> arr;
    int top;
public:
    StackArr(int size):maxSize(size),arr(size),top(-1){}
    void push(int value){
        if(isFull()) cout<<"Stack is full. Cannot push "<<value<<"\n";
        else{ arr[++top]=value; cout<<"Pushed "<<value<<"\n"; }
    }
    int pop(){
        if(isEmpty()){ cout<<"Stack is empty. Cannot pop.\n"; return -1; }
        return arr[top--];
    }
    bool isEmpty(){ return top==-1; }
    bool isFull(){ return top==maxSize-1; }
};

int main(){
    StackArr st(5);
    st.push(10); st.push(20); st.push(30);
    cout<<"Popped element: "<<st.pop()<<"\n";
    cout<<"Is stack empty? "<<(st.isEmpty()?"Yes":"No")<<"\n";
    cout<<"Is stack full? "<<(st.isFull()?"Yes":"No")<<"\n";
}


