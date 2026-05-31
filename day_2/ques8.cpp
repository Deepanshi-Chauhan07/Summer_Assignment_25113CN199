// to check whether a number is palindrome.
#include<iostream>
using namespace std;
int main(){
    int num;
    int rev_num=0;
    int rem=0;
    cout<<"enter the number:"<<endl;
    cin >> num;
    int ori_num=num;
    while(num>0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num/=10;
    }
    if(rev_num==ori_num){
        cout<<"the number is palindrome"<<endl;
    }
    else{
        cout<<"the number is not palindrome"<<endl;
    }
    return 0;
}