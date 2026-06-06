//QUES_27:WAP to recursive sum of digits.
#include<iostream>
using namespace std;
int sum_of_digits(int num){
    if(num==0){
        return 0;
    }
    return (num%10)+sum_of_digits(num/10);
}
int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin >> num;
    cout<<sum_of_digits(num)<<endl;
    return 0;
}