#include <iostream>
using namespace std;

// Function to count distinct elements in an array
int count_distinct(int arr[], int n) {
    int count = 0; // Counter for distinct elements

    for (int i = 0; i < n; i++) {
        bool isDistinct = true; // Assume the current element is distinct

        // Check the elements to the left of the current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) { // If a duplicate is found
                isDistinct = false;
                break;
            }
        }

        if (isDistinct) {
            count++; // Increment the count for distinct elements
        }
    }

    return count; // Return the total count of distinct elements
}

int main() {
    int n;
    cin >> n; // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }

    // Call the function and output the result
    cout << count_distinct(arr, n);

    return 0;
}