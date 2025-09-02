#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool check_if_sorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) { // If current element is less than the previous one
            return false; // Not sorted
        }
    }
    return true; // Sorted
}

int main() {
    int n;
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    // Check if the array is sorted
    if (check_if_sorted(arr, n) == false)
        cout << "Not sorted";
    else
        cout << "Sorted";

    return 0;
}