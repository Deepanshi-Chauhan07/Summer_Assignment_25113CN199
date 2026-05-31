// to find product of digits of a number.
#include<iostream>
using namespace std;
int main(){
    int pro_of_digits=1;
    int num;
    int rem=0;
    cout<<"enter the number:"<<endl;
    cin >> num;
    while(num>0){
        rem=num%10;
        pro_of_digits*=rem;
        num/=10;
    }
    cout<<"product of digits is:"<<pro_of_digits<<endl;
    return 0;
}