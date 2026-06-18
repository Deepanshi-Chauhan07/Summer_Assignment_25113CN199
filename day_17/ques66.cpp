// to find union of two arrays
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=6;
    int a[n]={1,1,2,3,4,5};
    int m=6;
    int b[m]={2,3,4,4,5,6};
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
        while(i<n){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<m){
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
        return 0;

        }
    
