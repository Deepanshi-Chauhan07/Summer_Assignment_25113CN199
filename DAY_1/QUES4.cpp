// to count digits in a number.
#include<iostream>
using namespace std;
int main(){
    int count=0;
    int num;
    cout<<"enter the number:"<<endl;
    cin >> num;
    while(num>0){
        num/=10;
        count++;
    }
    cout<<"the number of digits are:"<<count<<endl;
    return 0;
}