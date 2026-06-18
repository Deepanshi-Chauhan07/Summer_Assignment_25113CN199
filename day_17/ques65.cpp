// to merge two sorted arrays.
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int a[n]={1,3,5,7};
    int m=6;
    int b[m]={0,2,4,6,8,9};
    int c[m+n];
    int i=0;
    int j=0;
    int index=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            c[index]=a[i];
            i++,index++;
        }
        else{
            c[index]=b[j];
            j++,index++;
        }
    }
    while(i<n){
        c[index]=a[i];
        i++,index++;
    }
    while(j<m){
        c[index]=b[j];
        j++,index++;
    }
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<endl;
    }
    return 0;
}