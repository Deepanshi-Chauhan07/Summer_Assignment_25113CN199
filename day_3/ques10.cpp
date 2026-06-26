// to find prime number in a range.
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"enter the starting value:"<<endl;
    cin >> start;
    cout<<"enter the ending value:"<<endl;
    cin >> end;
    cout<<" the prime numbers in the given range are as follows:"<<endl;
    for(int i=start;i<=end;i++){
        bool isPrime=true;

        if(i<=1){
            isPrime=false;
        }
        else if(i<=3){
            isPrime=true;
        }
        else if( i%2==0 || i%3==0){
            isPrime=false;
        }
        else{
            for(int j =5;j*j<=i;j+=6){
                if(i%j==0 || i%(j+2)==0){
                    isPrime=false;
                    break;
                }
        }
    }
    if(isPrime){
        cout<<i<<endl;

}
    }
    return 0;
}
