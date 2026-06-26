// to print factorial of a number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin >> num;
    int fact=1;
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    cout<<"the factorial of a number is:"<<fact<<endl;
    return 0;
}