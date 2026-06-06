//QUES_28:WAP to Recursive reverse number.
#include<iostream>
using namespace std;
int rev_num(int num, int rev=0){
    if(num==0){
        return rev;
    }
    return rev_num(num/10, rev*10 + num%10);
}
int main(){
    int num;
    cout<<"enter the num:"<<endl;
    cin >> num;
    cout<<rev_num(num)<<endl;
    return 0;
}