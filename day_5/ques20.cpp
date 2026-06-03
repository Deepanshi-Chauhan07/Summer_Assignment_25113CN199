// to find largest prime factor.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin >> num;
    if(num<2){
        cout<<"No prime factors for numbers less than 1"<<endl;
    }
    int original_num=num;
    int largest_prime=-1;
    while(num%2==0){
        largest_prime=2;
        num/=2;
    }
    for(int i=3;i*i<=num;i+=2){
        while(num%i==0){
            largest_prime=i;
            num/=i;
        }
    }
    if(num>2){
        largest_prime=num;
    }
    cout<<"The largest prime factor of "<<original_num<<" is:"<<largest_prime<<endl;
    return 0;
}