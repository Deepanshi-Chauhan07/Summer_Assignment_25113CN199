// to find second largest element.
#include<iostream>
using namespace std;
int main(){
    int n=9;
    int arr[n]={1,0,2,4,8,3,1,4,7};
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(largest!=arr[i]  &&  slargest<arr[i]){
            slargest=arr[i];
        }
    }
    cout<<"second largest element of array is :"<<slargest<<endl;
    return 0;
}