// to count set of bits.
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the number:"<<endl;
    cin >> n;
    while(n>0){
        n=n&n-1;
        count++;
    }
    cout<<"the set of bits in a number are :"<<count<<endl;
    return 0;
}