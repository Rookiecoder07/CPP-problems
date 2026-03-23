#include<iostream>
using namespace std;

int missingnumber(int arr[], int n){
    int hash[n+1] = {0};

    // Mark present elements
    for(int i = 0; i < n-1; i++){
        hash[arr[i]] = 1;
    }

    // Find missing number
    for(int i = 1; i <= n; i++){
        if(hash[i] == 0){
            return i;
        }
    }

    return -1; // in case no missing number
}

int main(){
    int arr[] = {1,2,4,5};

    int result = missingnumber(arr, 5); // n = 5 (range 1 to 5)

    cout << "Missing number is: " << result;

    return 0;
}