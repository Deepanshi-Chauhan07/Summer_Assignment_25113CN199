// to generate fibonacii series
#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    cout<<"enter the no. of terms:"<<endl;
    cin >> n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    return 0;
}