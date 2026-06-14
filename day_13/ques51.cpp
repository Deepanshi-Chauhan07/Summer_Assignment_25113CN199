// to find largest and smallest element.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,-4,6,2,0};
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"smallest elemest of array is:"<<smallest<<endl;
    cout<<"largest element of array is:"<<largest<<endl;
    return 0;
}