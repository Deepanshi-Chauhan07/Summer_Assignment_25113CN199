// to input and display array.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<"displaying array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}