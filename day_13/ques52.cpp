// to count even and odd elements.
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,0,3,11,-5,6};
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout<<"no of even elements:"<<count_even<<endl;
    cout<<"no of odd elements:"<<count_odd<<endl;
    return 0;
}