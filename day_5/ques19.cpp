// to print factors of a number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin >> num;
    cout<<"factors of a number are as follows:"<<endl;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<endl;
            if(i!=num/i){
                cout<<num/i<<endl;
            }
        }
    }
    return 0;
}