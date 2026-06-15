// to right rotate array by d places.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d=3;
    vector<int>temp;
    for(int i=n-d;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=n-1;i>=d;i--){
        arr[i]=arr[i-d];
    }
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}