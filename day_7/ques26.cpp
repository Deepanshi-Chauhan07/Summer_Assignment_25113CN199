//QUES_26:WAP to print recursive fibonacci.
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int terms=5;
    cout<<"Fibonacci series is :"<<endl;
    for(int i=0;i<terms;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}