//to find pair with given sum.
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int arr[n]={2,7,11,23};
    int target=9;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<endl;
                cout<<j<<endl;
            }
        }
    }
    return 0;
}