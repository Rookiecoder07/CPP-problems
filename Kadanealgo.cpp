#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>& arr){
    int n = arr.size();
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i =0; i<n; i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum <0){
            currsum =0;
        }
    }
    return maxsum;
}

int main(){
    vector<int> arr = {1, -2, 3, 4, -5, 8};

    int result = kadane(arr);

    cout << "Maximum subarray sum is: " << result;

    return 0;
}