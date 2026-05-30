// Write a program to calculate sum of first N numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"the sum of first n numbers is:"<<sum<<endl;
    return 0;
}