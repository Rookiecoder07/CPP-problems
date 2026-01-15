#include <bits/stdc++.h>
using namespace std;
// 14. Quick Sort
int partitionQS(vector<int>& arr,int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){ i++; swap(arr[i], arr[j]); }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void quickSort(vector<int>& arr,int low,int high){
    if(low<high){
        int pi = partitionQS(arr,low,high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main(){
    vector<int> arr = {10,7,8,9,1,5};
    cout<<"Unsorted array: ";
    for(auto x:arr) cout<<x<<" ";
    cout<<"\n";
    quickSort(arr,0,(int)arr.size()-1);
    cout<<"Sorted array: ";
    for(auto x:arr) cout<<x<<" ";
    cout<<"\n";
}

