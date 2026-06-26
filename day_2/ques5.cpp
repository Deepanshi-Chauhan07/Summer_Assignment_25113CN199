//to find sum of digits of a number.
#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter the number:"<<endl;
    cin >> num;
    while(num>0){
        int rem=num%10;
        sum+=rem;
        num/=10;
    }
    cout<<"the sum of digits is:"<<sum<<endl;
    return 0;
}