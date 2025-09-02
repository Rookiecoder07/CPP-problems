#include <iostream>
using namespace std;

// Function to calculate the sum of array elements
int add(int arr[], int n) {
    int answer = 0; // Variable to store the sum of elements
    for (int i = 0; i < n; i++) {
        answer += arr[i]; // Add each element to the sum
    }
    return answer; // Return the final sum
}

int main() {
    int n;
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the add function and store the result in sum
    int sum = add(arr, n);

    // Output the sum
    cout << sum;

    return 0;
}