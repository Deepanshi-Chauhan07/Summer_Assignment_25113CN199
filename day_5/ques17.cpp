// to check a perfect number.
#include<iostream>
using namespace std;
int main(){
    int num,sum_of_divisors=0;
    cout<<"enter the number:"<<endl;
    cin >> num;
    if(num<=1){
        cout<<"entered no. is not a perfect number"<<endl;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            if(i*i==0){
                sum_of_divisors+=i;
            }else{
                sum_of_divisors+=i+(num/i);
            }
        }
    }
    if(sum_of_divisors==num){
        cout<<"entered number is a perfect number"<<endl;
    }
    else{
        cout<<"entered number is not a perfect number"<<endl;
    }
    return 0;
}