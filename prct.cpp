#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &array){
    int n = array.size();
     int largest = array[0];
    int  secondlargest = INT_MIN;

    for(int i=1; i< n; i++){
        if(array[i] > largest){
            secondlargest = largest;
            largest = array[i];
        }else if(array[i]>secondlargest && array[i]!= largest){
            secondlargest = array[i];
        }
       
    }
     cout<< "Largest element :" << largest << endl;
        cout << "Second largest element:" << secondlargest;

        return secondlargest;
}

int main(){

    vector<int> array = {2,6,4,1,3};
    find(array);
}
