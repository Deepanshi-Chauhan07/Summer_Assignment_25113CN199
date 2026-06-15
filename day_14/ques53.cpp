// WAP to linear search.
#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,3,4,0,8,5};
    int target,foundIndex;
    cout<<"enter element to be searched:";
    cin >> target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            foundIndex=i;
            break;
        
        }
    }
    if(foundIndex!=-1){
        cout<<"element "<<target<<" found at index "<<foundIndex<<endl;
        }
        else{
            cout<<"element "<<target<<" not found in array"<<endl;
        }
    return 0;
}