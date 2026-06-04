// to raise a number to a power without pow()'
#include<iostream>
using namespace std;
int main(){
    int num,pow,ans=1;
    cout<<"enter the number"<<endl;
    cin >> num;
    cout<<"enter the power"<<endl;
    cin >> pow;
    for(int i=1;i<=pow;i++){
        ans*=num;
    }
    cout<<"number raised to a power is:"<< ans<<endl;
    return 0;
}