// to check armstrong number in a given range.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int st,end,rem,count=0;
    cout<<"enter the starting value:"<<endl;
    cin >> st;
    cout<<"enter the ending value:"<<endl;
    cin >> end;
    cout<<"the armstrong number in the given range are:"<<endl;
    for(int i=st;i<=end;i++){
        count=0;
        int temp=i;
        int arm_num=0;
        while(temp>0){
            rem=temp%10;
            count++;
            temp/=10;
        }
        temp=i;
        while(temp>0){
            rem=temp%10;
            arm_num+=round(pow(rem,count));
            temp/=10;
        }
        if(i==arm_num && i!=0){
        cout<<arm_num<<endl;
        }
    }
    return 0;
}