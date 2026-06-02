// to find nth term of fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,nextterm;
    cout<<"enter the value of n:"<<endl;
    cin >> n;
    cout<<"the nth term of fibonacii series is:"<<endl;
            if(n==1){
            cout<<a<<endl;
        }
         else if(n==2){
            cout<<b<<endl;
        }
        else {
            for(int i=3;i<=n;i++){
            nextterm=a+b;
            a=b;
            b=nextterm;
            
            }
            cout<<nextterm<<endl;
        }
    
    return 0;
}