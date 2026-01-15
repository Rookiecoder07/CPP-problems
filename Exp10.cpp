#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int target){
    int left=0, right=(int)arr.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]<target) left = mid+1;
        else right = mid-1;
    }
    return -1;
}
int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80,90};
    int target = 70;
    int res = binarySearch(arr, target);
    if(res!=-1) cout<<"Element "<<target<<" found at index: "<<res<<"\n";
    else cout<<"Element "<<target<<" not found in the array.\n";
}

