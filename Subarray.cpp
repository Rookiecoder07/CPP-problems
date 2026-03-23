#include<iostream>
#include<climits>
using namespace std;

int subarrsum(int arr[],int n){
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i =0; i<n; i++){
        for(int j = i; j<n; j++){
            sum = 0; 
            for(int k = i; k<=j; k++){
                sum += arr[k];
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum;
    }
}

int main(){
    int arr[] = {1, -2, 3, 4, -5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = subarrsum(arr, n);

    cout << "Maximum subarray sum is: " << result;

    return 0;
}