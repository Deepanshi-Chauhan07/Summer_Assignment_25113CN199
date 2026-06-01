// to check whether a number is prine or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin >> num;
    bool isPrime=true;
    if(num<=1){
         isPrime=false;
    }
    else if(num<=3){
         isPrime=true;
    }
    else if(num%2==0 || num%3==0){
        isPrime=false;
    }
    else{
        for(int i=5;i*i<=num;i+=6){
            if(num%i==0 || num%(i+2)==0){
                isPrime=false;
                break;
            }
        }
    }
    
    if(isPrime){
        cout<<"entered number is a prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}