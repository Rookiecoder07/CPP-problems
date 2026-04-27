#include <bits/stdc++.h>
using namespace std;

void fibonacciIterative(int n){
    int a=0,b=1;
    cout << "Fibonacci series (Iterative) up to " << n << ": ";
    while(a<=n){ cout<<a<<" "; 
        int next=a+b;
            a=b; 
            b=next; }
    cout<<"\n";
}
void fibonacciRecursivePrint(int a,int b,int n){
    if(a>n) return;
    cout<<a<<" ";
    fibonacciRecursivePrint(b, a+b, n);
}

void exp6(){
    int num = 21;
    fibonacciIterative(num);
    cout << "Fibonacci series (Recursive) up to " << num << ": ";
    fibonacciRecursivePrint(0,1,num);
    cout << "\n";
}

int main(){

    exp6();
    return 0;
}
