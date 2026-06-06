// to print repeated number pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of rows:"<<endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}