#include <bits/stdc++.h>
using namespace std;

pair<int,int> findFirstAndLast(const vector<int>& arr, int x){
    int first=-1,last=-1;
    int left=0,right=(int)arr.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==x){ first=mid; right=mid-1; }
        else if(arr[mid]<x) left=mid+1;
        else right=mid-1;
    }
    left=0; right=(int)arr.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==x){ last=mid; left=mid+1; }
        else if(arr[mid]<x) left=mid+1;
        else right=mid-1;
    }
    return {first,last};
}
int main(){
    vector<int> arr = {1,2,2,2,3,4,5};
    int x = 2;
    auto res = findFirstAndLast(arr,x);
    cout<<"First occurrence of "<<x<<" is at index: "<<res.first<<"\n";
    cout<<"Last occurrence of "<<x<<" is at index: "<<res.second<<"\n";
}

