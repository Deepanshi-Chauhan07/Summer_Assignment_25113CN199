/*//to move zeroes to the end.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n=7;
int arr[n]={1,0,2,3,0,0,4};
vector<int>temp;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp.push_back(arr[i]);
    }
}
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}*/

//optimal approach to moe zeroes to the end.
#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={0,1,2,3,0,0,4};
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}