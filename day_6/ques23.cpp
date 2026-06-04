// to count set bits of a number.
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter the number:"<<endl;
    cin >> num;
    while(num>0){
        num=num & (num-1);
        count++;
    }
    cout<<"the no. of bits are : "<<count<<endl;
    return 0;
}