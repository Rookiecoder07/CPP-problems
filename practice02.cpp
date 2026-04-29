#include<bits/stdc++.h>
using namespace std;

int kthlargest(vector<int> &nums, int k){
    int n = nums.size();
    priority_queue<int> pq;
    for(int i : nums){
        pq.push(i);
    }
    while(k>1){
        pq.pop();
        k--;
    }
    return pq.top();

}
int main(){
    vector<int> nums ={3,2,1,5,6,4};
    int ans = kthlargest(nums,3);
    cout << ans;


    
}