// to convert binary to decimal.
#include<iostream>
using namespace std;
int main(){
    int binary_num,ans=0,pow=1;
    cout<<"enter the binary number:"<<endl;
    cin >> binary_num;
    while(binary_num>0){
        int rem=binary_num%10;
        ans+=rem*pow;
        pow*=2;
        binary_num/=10;

    }
    cout<<"number in decimal form is: "<<ans<<endl;
    return 0;
}