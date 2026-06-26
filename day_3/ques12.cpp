// to find LCM of two numbers.
#include<iostream>
using namespace std;
int main(){
    int num1,num2,lcm,gcd;
    cout<<"enter the first number."<<endl;
    cin >> num1;
    cout<<"enter the second number:"<<endl;
    cin >> num2;
    for(int i=min(num1,num2);i>=1;i--){
        if(num1%i==0 && num2%i==0){
             gcd=i;
            break;
        }
    }
    lcm=(num1*num2)/gcd;
    cout<<"LCM of given numbers is:"<<lcm<<endl;
    return 0;

}