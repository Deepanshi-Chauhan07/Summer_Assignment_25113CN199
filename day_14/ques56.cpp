// to find duplicates in an array.
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={0,0,1,1,2,2,2,3,3,4};
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"unique elements in an array are: "<<i+1<<endl;
    return 0;
}