// to find GCD of two numbers.
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the first number:"<<endl;
    cin >> num1;
    cout<<"enter the second number:"<<endl;
    cin >> num2;
    cout<<"GCD of two numbers is:"<<endl;
    for(int i=min(num1,num2);i>=1; i--){
        if(num1%i==0 && num2%i==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}