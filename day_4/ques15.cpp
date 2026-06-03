// to check whether a given number is armstrong.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,arm_num=0,rem,count=0;
    cout<<"enter the number to check:"<<endl;
    cin >> num;
    int ori_num=num;
    while(num>0){
        rem=num%10;
        count++;
        num/=10;
    }
    num=ori_num;
    while(num>0){
        rem=num%10;
        arm_num+=round(pow(rem,count));
        num/=10;
    }
    if(arm_num==ori_num){
        cout<<"entered number is armstrong number"<<endl;
    }
    else{
        cout<<"not a armstrong number"<<endl;
    }
}