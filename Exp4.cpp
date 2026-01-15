#include <bits/stdc++.h>
using namespace std;

void exp4() {
    vector<int> arr = {34,12,5,67,23,89,1,45};
    if(arr.empty()){ cout<<"Array empty\n"; return; }
    int mx = arr[0], mn = arr[0];
    for(size_t i=1;i<arr.size();++i){
     mx = max(mx, arr[i]); 
     mn = min(mn, arr[i]);
    }
    cout << "Maximum value: " << mx << "\nMinimum value: " << mn << "\n";
}

int main(){

    exp4();
    return 0;
}