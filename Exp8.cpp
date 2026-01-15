#include <bits/stdc++.h>
using namespace std;

// 8. Print n to 1 using recursion
void printNumbersDesc(int n){
    if(n<1) return;
    cout<<n<<" ";
    printNumbersDesc(n-1);
}

// void exp8(){
//     int n = 10;
//     cout << "Printing numbers from " << n << " to 1:\n";
//     printNumbersDesc(n);
//     cout<<"\n";
// }
int main(){
    int n = 10;
    cout << "Printing numbers from " << n << " to 1:\n";
    printNumbersDesc(n);
}


