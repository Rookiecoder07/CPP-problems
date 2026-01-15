#include <bits/stdc++.h>
using namespace std;

// 7. Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << "\n";
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << "\n";
    towerOfHanoi(n - 1, auxiliary, destination, source);
}


void exp7(){
    int n = 3;
    cout << "Tower of Hanoi solution for " << n << " disks:\n";
    towerOfHanoi(n,'A','C','B');
}
int main(){
    int n = 3;
    exp7();
}

