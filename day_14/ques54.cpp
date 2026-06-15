// to frequency of element.
#include<iostream>
using namespace std;
int main(){
    int n=8;
    int arr[n]={0,0,1,0,1,1,1,2};
    int target;
    cout<<"enter element to find frequency:";
    cin >> target;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"frequency of a element i.e. "<<target<<" is "<<count<<endl;
    return 0;
}