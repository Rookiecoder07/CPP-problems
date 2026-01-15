#include <bits/stdc++.h>
using namespace std;

void exp3() {
    vector<vector<int>> arr1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> arr2 = {{9,8,7},{6,5,4},{3,2,1}};
    int rows = arr1.size(), cols = arr1[0].size();
    vector<vector<int>> sum(rows, vector<int>(cols));
    for(int i=0;i<rows;i++) 
    for(int j=0;j<cols;j++) 
    sum[i][j]=arr1[i][j]+arr2[i][j];
    cout << "Sum of the two arrays:\n";
    for(auto &r: sum){ for(auto v: r) 
        cout << v << " "; 
        cout << "\n"; }
    vector<vector<int>> product(rows, vector<int>(cols,0));
    for(int i=0;i<rows;i++) 
    for(int j=0;j<cols;j++) 
    for(int k=0;k<cols;k++)
     product[i][j]+=arr1[i][k]*arr2[k][j];
    cout << "Product of the two arrays:\n";
    for(auto &r: product){
         for(auto v: r) cout << v << " "; cout << "\n"; }
}

int main(){

    exp3();
    return 0;
}


