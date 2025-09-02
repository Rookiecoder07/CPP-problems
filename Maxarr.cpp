#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum element in the array
int find_max(int arr[], int n) {
    int ans = arr[0]; // Initialize the maximum with the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > ans) { // If the current element is greater, update max
            ans = arr[i];
        }
    }
    return ans; // Return the maximum element
}

int main() {
    int n;
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and print the maximum element
    cout << find_max(arr, n);

    return 0;
}