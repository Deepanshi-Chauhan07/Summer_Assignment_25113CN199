// to find common elements.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=8;
    int a[n]={1,2,2,3,3,4,5,6};
    int p=7;
    int b[p]={2,3,3,5,6,6,7};
    vector<int>ans;
    int i=0;
    int j=0;
    while(i < n && j < p){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            if(ans.empty() || ans.back()!=a[i]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        }
    }
    cout<<"common elements of two arrays are:"<<endl;
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<endl;
    }

    return 0;
}