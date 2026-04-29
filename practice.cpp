#include<bits/stdc++.h>
using namespace std;

void sortcolors(vector<int>&colors){
    int low = 0;
    int mid =0; int high = colors.size()-1;
    while(mid<=high){
        if(colors[mid]==0){
            swap(colors[mid],colors[low]);
            mid++;
            low++;
        }else if(colors[mid]==1){
            mid++;

        }else{
            swap(colors[mid],colors[high]);
            high--;
        }
    }
}
int main(){
    vector<int> colors ={2,0,2,1,1,0};
    sortcolors(colors);
    for(auto x:colors) cout<<x<<" ";
    cout<<"\n";
}