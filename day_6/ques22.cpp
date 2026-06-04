// to convert binary to decimal number.
#include<iostream>
using namespace std;
int main(){
    int binary_num,pow=1,rem,ans=0;
    cout<<"enter the binary form of number:"<<endl;
    cin >> binary_num;
    while(binary_num>0){
        rem=binary_num%10;
        ans+=rem*pow;
        binary_num/=10;
        pow*=2;
    }
    cout<<"the number in decimal form is: " <<ans<<endl;
    return 0;
}