#include <bits/stdc++.h>
using namespace std;

void exp1() {
    int arr[200];
    int n, pos, val;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) 
      cin >> arr[i];

    cout << "\nEnter position to insert (0-" << n << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;
    if(pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return;
    }
    for (int i = n; i > pos; --i)
       arr[i] = arr[i-1];
    arr[pos] = val; n++;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; ++i)
       cout << arr[i] << " ";
    cout << "\n\nEnter position to delete (0-" << n-1 << "): ";
    cin >> pos;
    if(pos < 0 || pos >= n){
        cout << "Invalid position\n";
        return;
    }
    for (int i = pos; i < n-1; ++i) arr[i] = arr[i+1];
    n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\n";
}

int main(){
    exp1();
    return 0;
}


