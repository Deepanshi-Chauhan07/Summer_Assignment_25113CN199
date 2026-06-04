// to find x^n without pow.
#include<iostream>
using namespace std;
int main(){
    int num,ans=1,pow=1;
    cout<<"enter the number:"<<endl;
    cin >> num;
    cout<<"enter the power to be raised:"<<endl;
    cin >> pow;
    for(int i=1;i<=pow;i++){
        ans*=num;
    }
    cout<<"number raised to the entered power: "<<ans<<endl;
    return 0;
}