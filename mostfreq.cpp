#include<iostream>
#include<unordered_map>
using namespace std;
int findMostFrequent(int arr[], int n){
    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    int maxFreq = 0, ans = -1;

    for(auto it : freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
            ans = it.first;
        }
    }

    return ans;
}
int main(){
    int arr[] = {1, 2, 3, 2, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMostFrequent(arr, n);

    cout << "Most frequent number is: " << result;

    return 0;
}