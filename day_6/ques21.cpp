// to convert decimal number into binary number.
#include<iostream>
using namespace std;
int main(){
    int decnum,pow=1,rem,ans=0;
    cout<<"enter the decimal number:"<<endl;
    cin >> decnum;
    while(decnum>0){
        rem=decnum%2;
        ans+=rem*pow;
        pow*=10;
        decnum/=2;
    }
    cout<<"binary form of given decimal number is: "<<ans<<endl;
    return 0;
}