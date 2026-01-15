#include <bits/stdc++.h>
using namespace std;

// 13. Selection Sort
void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++) if(arr[j]<arr[minIndex]) minIndex=j;
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    vector<int> arr = {64,25,12,22,11};
    cout<<"Unsorted array: ";
    for(auto x:arr) cout<<x<<" ";
    cout<<"\n";
    selectionSort(arr);
    cout<<"Sorted array: ";
    for(auto x:arr) cout<<x<<" ";
    cout<<"\n";
}

