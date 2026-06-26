// to find intersection of two arrays.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=8;
    int a[n]={1,2,2,3,3,4,5,6};
    int m=7;
    int b[7]={2,3,3,5,6,6,7};
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++,j++;
        }
    }
    cout<<"intersection of two arrays are:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}