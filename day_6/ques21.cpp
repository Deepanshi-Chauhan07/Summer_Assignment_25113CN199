// to convert decimal to bianry number.
#include<iostream>
using namespace std;
int main(){
    int dec_num,ans=0,pow=1;
    cout<<"enter the number:"<<endl;
    cin >> dec_num;
    while(dec_num>0){
        int rem=dec_num%2;
        ans+=rem*pow;
        pow*=10;
        dec_num/=2;
    }
    cout<<"binary form of given decimal number is: "<<ans<<endl;
    return 0;
}