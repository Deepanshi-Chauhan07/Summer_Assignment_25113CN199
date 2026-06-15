// to reverse an array.
#include<iostream>
#include<vector>
using namespace  std;
int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    vector<int>temp;
    for(int i=0;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[n-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}