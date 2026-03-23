#include<iostream>
#include<unordered_map>
using namespace std;

int findno(int arr[], int n){
    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
        if(freq[arr[i]] > 1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={1,0,1,2,0,0,1,0,1,0};
    int result=findno(arr,10);
    cout<<"The number is: "<<result;
    return 0;

        
    }
