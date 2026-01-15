#include <bits/stdc++.h>
using namespace std;

void exp2() {
    vector<int> arr = {12,24,31,46,58};
    int n = arr.size();
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
    for (int i = 0; i < n/2; ++i) swap(arr[i], arr[n-1-i]);
    cout << "Reversed array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
}
int main(){

    exp2();
    return 0;
}

