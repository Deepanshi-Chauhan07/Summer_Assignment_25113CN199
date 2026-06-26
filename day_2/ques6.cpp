// t0 find reverse of a number.
#include<iostream>
using namespace std;
int main(){
    int num;
    int rev_num=0;
    int rem=0;
    cout<<"enter the number:"<<endl;
    cin >> num;
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num/=10;
    }
    cout<<"revese of a number is:"<<rev_num<<endl;
    return 0;
}