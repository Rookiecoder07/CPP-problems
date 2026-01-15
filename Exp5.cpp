#include <bits/stdc++.h>
using namespace std;

long long factorialRecursive(long long n){
    if(n==0 || n==1) return 1;
    return n * factorialRecursive(n-1);
}
long long factorialIterative(long long n){
    long long res=1;
    for(long long i=2;i<=n;i++) res*=i;
    return res;
}


void exp5(){
    long long num = 6;
    cout << "Factorial of " << num << " using iteration: " << factorialIterative(num) << "\n";
    cout << "Factorial of " << num << " using recursion: " << factorialRecursive(num) << "\n";
}

int main(){

    exp5();
    return 0;
}