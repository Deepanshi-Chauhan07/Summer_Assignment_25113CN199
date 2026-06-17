// to missig no. in an array.
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int arr[n]={3,2,4};
    int sum=(n*(n+1))/2;
    int sum2=0;
    int missing_number=0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    missing_number=sum-sum2;
    cout<<"missing number is array is:"<<missing_number;
    return 0;
}