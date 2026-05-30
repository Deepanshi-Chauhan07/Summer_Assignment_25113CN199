//to print multiplication table of a number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;
    cout<<"the multiplication table of a given number is:"<<endl;
    for(int i=1;i<=10;i++){
        cout<<num*i<<endl;
        }
        return 0;
}