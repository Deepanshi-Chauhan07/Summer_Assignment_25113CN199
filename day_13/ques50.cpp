// to find sum and average of array.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,4,5,33,67};
    int sum=0 , avg;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/5;
    cout<<"sum of array is:"<< sum<<endl;
    cout<<"average of array is:"<< avg;
    return 0;
}    