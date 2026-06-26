//to print number pyramid.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the rows:";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        int breakpoint=(2*i+1)/2;
        int num=1;
        for(int j=1;j<=2*i+1;j++){
            cout<<num;
            if(j<=breakpoint){
                num++;
            }
            else{
                num--;
            }
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}