#include <bits/stdc++.h>
using namespace std;

// 9. Linear search in 2D matrix
pair<int,int> linearSearch2D(const vector<vector<int>>& matrix, int target){
    for(size_t i=0;i<matrix.size();++i)
        for(size_t j=0;j<matrix[i].size();++j)
            if(matrix[i][j]==target) return { (int)i, (int)j };
    return {-1,-1};
}


void exp9(){
    vector<vector<int>> matrix = {{10,20,30},{40,50,60},{70,80,90}};
    int target = 50;
    auto res = linearSearch2D(matrix, target);
    if(res.first!=-1) cout<<"Element "<<target<<" found at position: ("<<res.first<<", "<<res.second<<")\n";
    else cout<<"Element "<<target<<" not found in the matrix.\n";
}

// 10. Binary search in array
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
