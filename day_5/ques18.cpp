// to check whether a number is strong number.
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter the number"<<endl;
    cin >> num;
    int original_num=num;
    while(num>0){
        int rem=num%10;
        int fact=1;
        for(int i=1;i<=rem;i++){

            fact=fact*i;      
        }
        sum+=fact;
        num/=10;
    }
    if(sum==original_num){
        cout<<"entered number is a strong number"<<endl;
    }
    else{
        cout<<"entered number is not a strong number"<<endl;
    }
    return 0;
}